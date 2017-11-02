#ifndef PARTICLE_H
#define PARTICLE_H

#include "TObject.h"

class Particle : public TObject
{
	UInt_t fPid;
	Short_t fCharge;	//Particle absolute charge
	Float_t fBx;		//Particle bx parameter
	Float_t fBy;		//Particle by parameter
	Float_t fPx;		//Particle momentum on X-axis
	Float_t fPy;		//Particle momentum on Y-axis
	Float_t fPz;		//Particle momentum on Z-axis
	Float_t fdEdx;		//Particle dE/dx
	Float_t fdEdxVtpc1;	//Particle energy loss in VTPC1
	Float_t fdEdxVtpc2;	//Particle energy loss in VTPC2
	Float_t fdEdxMtpc;	//Particle energy loss in MTPCs
	Int_t fNdEdx;		//Number of dE/dx points
	Int_t fNdEdxVtpc1;	//Number of dE/dx points in VTPC1
	Int_t fNdEdxVtpc2;	//Number of dE/dx points in VTPC2
	Int_t fNdEdxMtpc;	//Number of dE/dx points in MTPCs
	Float_t fVTPC1_Sx;	
	Float_t fVTPC1_Sy;	//X,Y point of track at VTPC1 entrance
	Float_t fVTPC1_Ex;	
	Float_t fVTPC1_Ey;	//X,Y point of track at VTPC1 exit
	Float_t fVTPC2_Sx;
	Float_t fVTPC2_Sy;	//X,Y point of track at VTPC2 entrance
	Float_t fVTPC2_Ex;	
	Float_t fVTPC2_Ey;	//X,Y point of track at VTPC2 exit
	Float_t fMTPC_Sx;	
	Float_t fMTPC_Sy;	//X,Y point of track at MTPC entrance
	Float_t fMTPC_Ex;
	Float_t fMTPC_Ey;	//X,Y point of track at MTPC exit

public:
	Particle();
	Particle(Particle&);
	Particle(Particle&, UInt_t);	//needed in Mixer
	Particle(UInt_t, Short_t, Float_t, Float_t, Float_t, Float_t, Float_t,
		Float_t, Float_t, Float_t, Float_t,	//dE/dx global, dE/dx VTPC1, dE/dx VTPC2, dE/dx MTPC
		Int_t, Int_t, Int_t, Int_t);	//number of dE/dx points: global, VTPC1, VTPC2, MTPC
	virtual ~Particle();

	void Clear();

	inline UInt_t GetPid() const { return fPid;}
	inline Short_t GetCharge() const { return fCharge;}
	inline Bool_t isPositive() const { return (fCharge <= 0 ? false : true);}
	inline Float_t GetBx() const { return fBx;}
	inline Float_t GetBy() const { return fBy;}
	inline Float_t GetPx() const { return fPx;}
	inline Float_t GetPy() const { return fPy;}
	inline Float_t GetPz() const { return fPz;}
	inline Float_t GetdEdx() const { return fdEdx;}
	inline Float_t GetdEdxVtpc1() const { return fdEdxVtpc1;}
	inline Float_t GetdEdxVtpc2() const { return fdEdxVtpc2;}
	inline Float_t GetdEdxMtpc() const { return fdEdxMtpc;}
	inline Int_t GetNdEdx() const { return fNdEdx;}
	inline Int_t GetNdEdxVtpc1() const { return fNdEdxVtpc1;}
	inline Int_t GetNdEdxVtpc2() const { return fNdEdxVtpc2;}
	inline Int_t GetNdEdxMtpc() const { return fNdEdxMtpc;}
	inline Float_t GetVTPC1_Sx() const { return fVTPC1_Sx;}
	inline Float_t GetVTPC1_Sy() const { return fVTPC1_Sy;}
	inline Float_t GetVTPC1_Ex() const { return fVTPC1_Ex;}
	inline Float_t GetVTPC1_Ey() const { return fVTPC1_Ey;}
	inline Float_t GetVTPC2_Sx() const { return fVTPC2_Sx;}
	inline Float_t GetVTPC2_Sy() const { return fVTPC2_Sy;}
	inline Float_t GetVTPC2_Ex() const { return fVTPC2_Ex;}
	inline Float_t GetVTPC2_Ey() const { return fVTPC2_Ey;}
	inline Float_t GetMTPC_Sx() const { return fMTPC_Sx;}
	inline Float_t GetMTPC_Sy() const { return fMTPC_Sy;}
	inline Float_t GetMTPC_Ex() const { return fMTPC_Ex;}
	inline Float_t GetMTPC_Ey() const { return fMTPC_Ey;}
	
	inline void SetPid(UInt_t pid) { fPid = pid;}
	inline void SetCharge(Short_t charge) { fCharge = charge;}
	inline void SetBx(Float_t bx) { fBx = bx;}
	inline void SetBy(Float_t by) { fBy = by;}
	inline void SetPx(Float_t px) { fPx = px;}
	inline void SetPy(Float_t py) { fPy = py;}
	inline void SetPz(Float_t pz) { fPz = pz;}
	inline void SetdEdx(Float_t dedx) { fdEdx = dedx;}
	inline void SetdEdxVtpc1(Float_t dedx_vtpc1) { fdEdxVtpc1 = dedx_vtpc1;}
	inline void SetdEdxVtpc2(Float_t dedx_vtpc2) { fdEdxVtpc2 = dedx_vtpc2;}
	inline void SetdEdxMtpc(Float_t dedx_mtpc) { fdEdxMtpc = dedx_mtpc;}
	inline void SetNdEdx(Int_t ndedx) { fNdEdx = ndedx;}
	inline void SetNdEdxVtpc1(Int_t ndedx_vtpc1) { fNdEdxVtpc1 = ndedx_vtpc1;}
	inline void SetNdEdxVtpc2(Int_t ndedx_vtpc2) { fNdEdxVtpc2 = ndedx_vtpc2;}
	inline void SetNdEdxMtpc(Int_t ndedx_mtpc) { fNdEdxMtpc = ndedx_mtpc;}
	inline void SetVTPC1_Sx(Float_t vtpc1_sx) { fVTPC1_Sx = vtpc1_sx;}
	inline void SetVTPC1_Sy(Float_t vtpc1_sy) { fVTPC1_Sy = vtpc1_sy;}
	inline void SetVTPC1_Ex(Float_t vtpc1_ex) { fVTPC1_Ex = vtpc1_ex;}
	inline void SetVTPC1_Ey(Float_t vtpc1_ey) { fVTPC1_Ey = vtpc1_ey;}
	inline void SetVTPC2_Sx(Float_t vtpc2_sx) { fVTPC2_Sx = vtpc2_sx;}
	inline void SetVTPC2_Sy(Float_t vtpc2_sy) { fVTPC2_Sy = vtpc2_sy;}
	inline void SetVTPC2_Ex(Float_t vtpc2_ex) { fVTPC2_Ex = vtpc2_ex;}
	inline void SetVTPC2_Ey(Float_t vtpc2_ey) { fVTPC2_Ey = vtpc2_ey;}
	inline void SetMTPC_Sx(Float_t mtpc_sx) { fMTPC_Sx = mtpc_sx;}
	inline void SetMTPC_Sy(Float_t mtpc_sy) { fMTPC_Sy = mtpc_sy;}
	inline void SetMTPC_Ex(Float_t mtpc_ex) { fMTPC_Ex = mtpc_ex;}
	inline void SetMTPC_Ey(Float_t mtpc_ey) { fMTPC_Ey = mtpc_ey;}

	
	void SetBpar(Float_t, Float_t);
	void SetP(Float_t, Float_t, Float_t);
	void Setdedx(Float_t, Float_t, Float_t, Float_t);
	void SetNdedx(Int_t, Int_t, Int_t, Int_t);
	void SetVTPC1points(Float_t, Float_t, Float_t, Float_t);
	void SetVTPC2points(Float_t, Float_t, Float_t, Float_t);
	void SetMTPCpoints(Float_t, Float_t, Float_t, Float_t);
	ClassDef(Particle,1);
};

#endif
