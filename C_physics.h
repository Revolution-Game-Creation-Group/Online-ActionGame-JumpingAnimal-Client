//
//
//  Generated by Agora Plastic(tm) C++ Add-In
//
//  @ Project : Untitled
//  @ File Name : C_physics.h
//  @ Date : 2005-08-18
//  @ Author : 
//
//


#if !defined(_C_PHYSICS_H)
#define _C_PHYSICS_H
#include "C_obj.h"
#include "IOClass.h"
#include <math.h>

class C_physics {
public:
	//�Ӽ���;
	//����Ʈ ����;
	C_physics						( float gravx, float gravy );
	virtual ~C_physics						();
	void	step					( /*DWORD time*/ );
	void	setGravity				( float gravx, float gravy );
	void	movable_obj_include		( C_obj* inobj );
	void	movable_obj_exclude		( C_obj* exobj );
	void	fixed_obj_include		( C_obj* inobj );
	//������ ������ ��Ŷ�� ���� ��Ŷ ��
	void	check_next_position		( C_obj* temp );
	C_obj	evented_obj				();
	//����Ʈ�� ������Ʈ ��ȯ
	C_obj	ReturnObj				( char* name );
	//�浹 üũ
	BOOL	culision_check			( C_obj* culision_main );
	//event �߻�
	void	boom					( int x, int y, int width, int height, float power );
	void	boom_process			();
	//������Ʈ ������
//	void	impulse					( char* name, float x, float y ) ;
	void fixed_obj_remove();
	void fixed_obj_draw();

#ifdef _DEBUG
	void Test();
#endif

	
private:
	float		Gravity[2];
	/****************************************************/
	/*					����Ʈ ����						*/
	/****************************************************/
	/*	draw	:	�׸��� �Ѹ��� ���� ����Ʈ			*/
	/*	mavable	:	�߷��� ���� �Ǵ� ������Ʈ ����Ʈ	*/
	/*	fixed	:	������ ��ü ����Ʈ					*/
	/****************************************************/
	C_obj*		draw_first;
	C_obj*		movable_first;
	C_obj*		fixed_first;
	C_obj*		movable_obj_list;
	C_obj*		fixed_obj_list;
	C_obj*		draw_obj_list;
	int			m_list_index;
	int			f_list_index;
};

#endif  //_C_PHYSICS_H