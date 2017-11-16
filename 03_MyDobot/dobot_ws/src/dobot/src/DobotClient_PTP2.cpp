/* ROS */
#include "ros/ros.h"
#include "std_msgs/String.h"
#include "dobot/SetPTPCmd.h"

/****** �܂Ƃ� ******/
//main�֐��̒��ɂ��ׂċL��
// �m�[�h�쐬����
// �N���C�A���g�I�u�W�F�N�g�̕ϐ��錾
// �N���C�A���g�̃m�[�h�쐬
// �N���C�A���g�̃C���X�^���X���� �����ɁA�T�[�o�ɐڑ��B
//�@�����̐錾�iSetPTPCmd�^�j
// �����ւ̒l�̑��

// ���ۂ̍�ƁF���[�v���Ȃ���T�[�o���R�[������B�ς���̂́A�����������B�B�B
//�@�������T�[�o�ɂ���΂悳���B


int main(int argc, char **argv)
{

/****** �������錾 ******/

	//ROS�̏������BDobotClient�Ƃ������O�̃m�[�h�Ƃ��Đ錾����B
    ros::init(argc, argv, "DobotClient");

	//�m�[�h�n���h���̐錾�B�m�[�h�̏������������s���B
    ros::NodeHandle n;

	//�N���C�A���g�́i�߂�l�́H�j�^
    ros::ServiceClient client;

	//�N���C�A���g�C���X�^���X�쐬�B�Ȃ���T�[�o�́F"/DobotServer/SetPTPCmd"�B�@
    client = n.serviceClient<dobot::SetPTPCmd>("/DobotServer/SetPTPCmd");

	//SetPTPCmd�iAPI�֌W�j�@�̕ϐ��錾�B���̉����Ȃ��Ă��A�ϐ�����H
    dobot::SetPTPCmd srv;

	
/****** ���s ******/

	//Ctrl+C������ꂽ�肵�āAros::ok()==false�ɂȂ�܂ŌJ��Ԃ�
    while (ros::ok()) {
				
        // �ʒuA
        do {
			//�R�[�����邽�߂̈����̐ݒ�
            srv.request.ptpMode = 1;
            srv.request.x = 200;
            srv.request.y = 0;
            srv.request.z = 0;
            srv.request.r = 0;
			
			//�T�[�o���R�[��
            client.call(srv);
			
			//���ʂ������甲����H0������false??
            if (srv.response.result == 0) {
                break;
            }
			
			//���[�v			
            ros::spinOnce();
			
			//�ُ킪�������甲����H
            if (ros::ok() == false) {
                break;
            }
        } while (1);


        // �ʒuB
        do {
            srv.request.ptpMode = 1;
            srv.request.x = 250;
            srv.request.y = 0;
            srv.request.z = 0;
            srv.request.r = 0;
            client.call(srv);
            if (srv.response.result == 0) {
                break;
            }
            ros::spinOnce();
            if (ros::ok() == false) {
                break;
            }
        } while (1);
  
        ros::spinOnce();
    }

    return 0;
}

