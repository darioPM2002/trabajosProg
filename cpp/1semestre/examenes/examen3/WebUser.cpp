#include "WebUser.h"
WebUser::WebUser()
{
usrName ="";
usrPWD  ="";
usrType ="";

}

WebUser::WebUser(std::string usrName_user, std::string usrPWD_user, std::string usrType_user)
{
usrName =usrName_user;
usrPWD  =usrPWD_user;
usrType =usrType_user;

}

  std::string WebUser::get_usrName(){return usrName;};     
  std::string WebUser::get_usrPWD (){return usrPWD;};
  std::string WebUser::get_usrType(){return usrType;};
