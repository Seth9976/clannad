// 函数: sub_6349a0
// 地址: 0x6349a0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9c16d5
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int64_t* var_14 = arg1
int32_t __saved_ebp
int32_t var_24 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int64_t* var_14_1 = arg1
*arg1 = *arg2
arg1[1].d = arg2[1].d
int32_t eax_3
eax_3.w = *(arg2 + 0xc)
*(arg1 + 0xc) = eax_3.w
*(arg1 + 0x24) = 7
arg1[4].d = 0
arg1[2].w = 0
sub_52e3c0(&arg1[2], &arg2[2], 0, 0xffffffff)
int32_t var_8_1 = 0
*(arg1 + 0x3c) = 7
arg1[7].d = 0
arg1[5].w = 0
sub_52e3c0(&arg1[5], &arg2[5], 0, 0xffffffff)
var_8_1.b = 1
*(arg1 + 0x54) = 7
arg1[0xa].d = 0
arg1[8].w = 0
sub_52e3c0(&arg1[8], &arg2[8], 0, 0xffffffff)
var_8_1.b = 2
*(arg1 + 0x6c) = 7
arg1[0xd].d = 0
arg1[0xb].w = 0
sub_52e3c0(&arg1[0xb], &arg2[0xb], 0, 0xffffffff)
var_8_1.b = 3
*(arg1 + 0x84) = 7
arg1[0x10].d = 0
arg1[0xe].w = 0
sub_52e3c0(&arg1[0xe], &arg2[0xe], 0, 0xffffffff)
var_8_1.b = 4
sub_597840(&arg1[0x11], &arg2[0x11])
*(arg1 + 0x94) = *(arg2 + 0x94)
var_8_1.b = 5
sub_597840(&arg1[0x13], &arg2[0x13])
*(arg1 + 0xa4) = *(arg2 + 0xa4)
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
