#include <iostream>
#include "ParticleTree.h"

ParticleTree::ParticleTree(TString filename)
{
	file = new TFile(filename, "recreate");
	tree = new TTree("events","events");
	event = new Event();
	tree->Branch("event","Event",&event);
	part_id = ev_id = 0;
}

void ParticleTree::SetEvid(UInt_t eid)
{
	ev_id = eid;
}

void ParticleTree::BeginEvent()
{
	event->SetEid(++ev_id);
}

void ParticleTree::BeginEvent(UInt_t eid)
{
	event->SetEid(eid);
}

UInt_t ParticleTree::Check()
{
	return event->GetNpa();
}		

UInt_t ParticleTree::EndEvent()
{
	UInt_t particles = event->GetNpa();
	tree->Fill();
	event->Clear();

	return particles;
}

UInt_t ParticleTree::CancelEvent()
{
	UInt_t particles = event->GetNpa();
	event->Clear();

	return particles;
}

void ParticleTree::AddParticle(Short_t charge, Float_t px, Float_t py, Float_t pz, Float_t dedx, Float_t dedx_vtpc1, Float_t dedx_vtpc2, Float_t dedx_mtpc, Int_t ndedx, Int_t ndedx_vtpc1, Int_t ndedx_vtpc2, Int_t ndedx_mtpc)
{
	event->AddParticle(++part_id, charge, px, py, pz, dedx, dedx_vtpc1, dedx_vtpc2, dedx_mtpc, ndedx, ndedx_vtpc1, ndedx_vtpc2, ndedx_mtpc);
}

void ParticleTree::AddParticle(UInt_t pid, Short_t charge, Float_t px, Float_t py, Float_t pz, Float_t dedx, Float_t dedx_vtpc1, Float_t dedx_vtpc2, Float_t dedx_mtpc, Int_t ndedx, Int_t ndedx_vtpc1, Int_t ndedx_vtpc2, Int_t ndedx_mtpc)
{
	event->AddParticle(pid, charge, px, py, pz, dedx, dedx_vtpc1, dedx_vtpc2, dedx_mtpc, ndedx, ndedx_vtpc1, ndedx_vtpc2, ndedx_mtpc);
}

void ParticleTree::AddParticle(Particle& ref_part)
{
	event->AddParticle(ref_part, ++part_id);
}

void ParticleTree::AddParticle(Particle& ref_part, UInt_t new_pid)
{
	event->AddParticle(ref_part, new_pid);
}

void ParticleTree::Close()
{
	tree->AutoSave("overwrite");
	delete tree;
	file->Close();
	delete file;
}

ParticleTree::~ParticleTree()
{

}
