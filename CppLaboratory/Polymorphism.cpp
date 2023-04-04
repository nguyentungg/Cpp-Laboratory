#include <iostream>

using namespace std;
class ObjectP {
public:
	virtual void BeginPlay();
};

class ActorP : public ObjectP
{
public:
	virtual void BeginPlay() override;
};
class PawnP : public ActorP
{
public:
	virtual void BeginPlay() override;
};
//int main() {
//
//
//	ObjectP* ptr_to_object = new ObjectP;
//	ActorP* ptr_to_actor = new ActorP;
//	PawnP* ptr_to_pawn = new PawnP;
//
//	ObjectP* ObjectPArray[] = { ptr_to_object, ptr_to_actor, ptr_to_pawn };
//
//	for (int i = 0; i < 3; i++) {
//		ObjectPArray[i]->BeginPlay();
//	}
//
//	delete ptr_to_object;
//	delete ptr_to_actor;
//	delete ptr_to_pawn;
//
//	system("pause");
//}

void ObjectP::BeginPlay() {
	cout << "ObjectP BeginPlay() called. \n";
}

void ActorP::BeginPlay() {
	cout << "ActorP BeginPlay() called. \n";
}

void PawnP::BeginPlay() {
	cout << "PawnP BeginPlay() called. \n";
}