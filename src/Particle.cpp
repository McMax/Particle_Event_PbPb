#include "TObject.h"
#include "Particle.h"

Particle::Particle()
{
	Clear();
}

Particle::Particle(UInt_t pid, Short_t charge, 
			Float_t px, Float_t py, Float_t pz,
			Float_t dedx, Float_t dedx_vtpc1, Float_t dedx_vtpc2, Float_t dedx_mtpc,
			Int_t ndedx, Int_t ndedx_vtpc1, Int_t ndedx_vtpc2, Int_t ndedx_mtpc)
{
	fPid = pid;
	fCharge = charge;

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
}

Particle::Particle(Particle& part_ref, UInt_t new_pid)
{
	fPid = new_pid;
	fCharge = part_ref.fCharge;

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
}

void Particle::Clear()
{
	fPid = 0;
	fCharge = 0;
	fPx = fPy = fPz = fdEdx = fdEdxVtpc1 = fdEdxVtpc2 = fdEdxMtpc = 0.;
	fNdEdx = fNdEdxVtpc1 = fNdEdxVtpc2 = fNdEdxMtpc = 0;
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

Particle::~Particle()
{

}

ClassImp(Particle);
