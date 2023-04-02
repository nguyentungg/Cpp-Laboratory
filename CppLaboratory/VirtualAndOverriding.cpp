#include <iostream>

using namespace std;
class ObjectV {
public:
	virtual void BeginPlay();
};

class ActorV : public ObjectV
{
public:
	virtual void BeginPlay() override;
};
class PawnV : public ActorV
{
public:
	virtual void BeginPlay() override;
};
//int main() {
//
//	//ObjectV* obj = new ObjectV;
//	//obj->BeginPlay();
//
//	//ActorV* act = new ActorV;
//	//act->BeginPlay(); 
//
//	PawnV* pwn = new PawnV;
//	pwn->BeginPlay();
//
//	//delete obj;
//	//delete act;
//	delete pwn;
//	system("pause");
//}

void ObjectV::BeginPlay() {
	cout << "Object BeginPlay() called. \n";
}

void ActorV::BeginPlay() {
	cout << "Actor BeginPlay() called. \n";
	ObjectV::BeginPlay();
}

void PawnV::BeginPlay() {
	cout << "Pawn BeginPlay() called. \n";
	ObjectV::BeginPlay();
	ActorV::BeginPlay();
}