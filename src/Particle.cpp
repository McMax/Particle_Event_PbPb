#include "TObject.h"
#include "Particle.h"

Particle::Particle()
{
	Clear();
}

Particle::Particle(UInt_t pid, Short_t charge, 
			Float_t bx, Float_t by,
			Float_t px, Float_t py, Float_t pz,
			Float_t dedx, Float_t dedx_vtpc1, Float_t dedx_vtpc2, Float_t dedx_mtpc,
			Int_t ndedx, Int_t ndedx_vtpc1, Int_t ndedx_vtpc2, Int_t ndedx_mtpc)
{
	fPid = pid;
	fCharge = charge;

	fBx = bx;
	fBy = by;

	fPx = px;
	fPy = py;
	fPz = pz;

	fdEdx = dedx;
	fdEdxVtpc1 = dedx_vtpc1;
	fdEdxVtpc2 = dedx_vtpc2;
	fdEdxMtpc = dedx_mtpc;

	fNdEdx = ndedx;
	fNdEdxVtpc1 = ndedx_vtpc1;
	fNdEdxVtpc2 = ndedx_vtpc2;
	fNdEdxMtpc = ndedx_mtpc;
}

Particle::Particle(Particle& part_ref)
{
	fPid = part_ref.fPid;
	fCharge = part_ref.fCharge;

	fBx = part_ref.fBx;
	fBy = part_ref.fBy;

	fPx = part_ref.fPx;
	fPy = part_ref.fPy;
	fPz = part_ref.fPz;

	fdEdx = part_ref.fdEdx;
	fdEdxVtpc1 = part_ref.fdEdxVtpc1;
	fdEdxVtpc2 = part_ref.fdEdxVtpc2;
	fdEdxMtpc = part_ref.fdEdxMtpc;

	fNdEdx = part_ref.fNdEdx;
	fNdEdxVtpc1 = part_ref.fNdEdxVtpc1;
	fNdEdxVtpc2 = part_ref.fNdEdxVtpc2;
	fNdEdxMtpc = part_ref.fNdEdxMtpc;

	fVTPC1_Sx = part_ref.fVTPC1_Sx;
	fVTPC1_Sy = part_ref.fVTPC1_Sy;
	fVTPC1_Ex = part_ref.fVTPC1_Ex;
	fVTPC1_Ey = part_ref.fVTPC1_Ey;
	fVTPC2_Sx = part_ref.fVTPC2_Sx;
	fVTPC2_Sy = part_ref.fVTPC2_Sy;
	fVTPC2_Ex = part_ref.fVTPC2_Ex;
	fVTPC2_Ey = part_ref.fVTPC2_Ey;
	fMTPC_Sx = part_ref.fMTPC_Sx;
	fMTPC_Sy = part_ref.fMTPC_Sy;
	fMTPC_Ex = part_ref.fMTPC_Ex;
	fMTPC_Ey = part_ref.fMTPC_Ey;
}

Particle::Particle(Particle& part_ref, UInt_t new_pid)
{
	fPid = new_pid;
	fCharge = part_ref.fCharge;

	fBx = part_ref.fBx;
	fBy = part_ref.fBy;

	fPx = part_ref.fPx;
	fPy = part_ref.fPy;
	fPz = part_ref.fPz;

	fdEdx = part_ref.fdEdx;
	fdEdxVtpc1 = part_ref.fdEdxVtpc1;
	fdEdxVtpc2 = part_ref.fdEdxVtpc2;
	fdEdxMtpc = part_ref.fdEdxMtpc;

	fNdEdx = part_ref.fNdEdx;
	fNdEdxVtpc1 = part_ref.fNdEdxVtpc1;
	fNdEdxVtpc2 = part_ref.fNdEdxVtpc2;
	fNdEdxMtpc = part_ref.fNdEdxMtpc;

	fVTPC1_Sx = part_ref.fVTPC1_Sx;
	fVTPC1_Sy = part_ref.fVTPC1_Sy;
	fVTPC1_Ex = part_ref.fVTPC1_Ex;
	fVTPC1_Ey = part_ref.fVTPC1_Ey;
	fVTPC2_Sx = part_ref.fVTPC2_Sx;
	fVTPC2_Sy = part_ref.fVTPC2_Sy;
	fVTPC2_Ex = part_ref.fVTPC2_Ex;
	fVTPC2_Ey = part_ref.fVTPC2_Ey;
	fMTPC_Sx = part_ref.fMTPC_Sx;
	fMTPC_Sy = part_ref.fMTPC_Sy;
	fMTPC_Ex = part_ref.fMTPC_Ex;
	fMTPC_Ey = part_ref.fMTPC_Ey;
}

void Particle::Clear()
{
	fPid = 0;
	fCharge = 0;
	fBx = fBy = fPx = fPy = fPz = fdEdx = fdEdxVtpc1 = fdEdxVtpc2 = fdEdxMtpc = 0.;
	fNdEdx = fNdEdxVtpc1 = fNdEdxVtpc2 = fNdEdxMtpc = 0;
	fVTPC1_Sx = fVTPC1_Sy = fVTPC1_Ex = fVTPC1_Ey = 0;
	fVTPC2_Sx = fVTPC2_Sy = fVTPC2_Ex = fVTPC2_Ey = 0;
	fMTPC_Sx = fMTPC_Sy = fMTPC_Ex = fMTPC_Ey = 0;
}

void Particle::SetBpar(Float_t bx, Float_t by)
{
	fBx = bx;
	fBy = by;
}

void Particle::SetP(Float_t px, Float_t py, Float_t pz)
{
	fPx = px;
	fPy = py;
	fPz = pz;
}

void Particle::Setdedx(Float_t dedx, Float_t dedx_vtpc1, Float_t dedx_vtpc2, Float_t dedx_mtpc)
{
	fdEdx = dedx;
	fdEdxVtpc1 = dedx_vtpc1;
	fdEdxVtpc2 = dedx_vtpc2;
	fdEdxMtpc = dedx_mtpc;
}

void Particle::SetNdedx(Int_t ndedx, Int_t ndedx_vtpc1, Int_t ndedx_vtpc2, Int_t ndedx_mtpc)
{
	fNdEdx = ndedx;
	fNdEdxVtpc1 = ndedx_vtpc1;
	fNdEdxVtpc2 = ndedx_vtpc2;
	fNdEdxMtpc = ndedx_mtpc;
}

void Particle::SetVTPC1points(Float_t vtpc1_sx, Float_t vtpc1_sy, Float_t vtpc1_ex, Float_t vtpc1_ey)
{
	fVTPC1_Sx = vtpc1_sx;
	fVTPC1_Sy = vtpc1_sy;
	fVTPC1_Ex = vtpc1_ex;
	fVTPC1_Ey = vtpc1_ey;
}

void Particle::SetVTPC2points(Float_t vtpc2_sx, Float_t vtpc2_sy, Float_t vtpc2_ex, Float_t vtpc2_ey)
{
	fVTPC2_Sx = vtpc2_sx;
	fVTPC2_Sy = vtpc2_sy;
	fVTPC2_Ex = vtpc2_ex;
	fVTPC2_Ey = vtpc2_ey;
}

void Particle::SetMTPCpoints(Float_t mtpc_sx, Float_t mtpc_sy, Float_t mtpc_ex, Float_t mtpc_ey)
{
	fMTPC_Sx = mtpc_sx;
	fMTPC_Sy = mtpc_sy;
	fMTPC_Ex = mtpc_ex;
	fMTPC_Ey = mtpc_ey;
}

Particle::~Particle()
{

}

ClassImp(Particle);
