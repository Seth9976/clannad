// 函数: sub_4a4195
// 地址: 0x4a4195
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

uint32_t __security_cookie_1 = __security_cookie
void var_108
void arg_14
__vsprintf_p(&var_108, 0x100, arg4, &arg_14)
void* eax = nullptr
char var_9 = 0

if (arg2 != 0)
    int32_t edx_1 = *(arg2 + 4)
    
    if (edx_1 == 3)
        eax = arg2 + 0x10
    else if (edx_1 == 6)
        eax = *(arg2 + 0x14) + 0x10
    else if (edx_1 == 0xd)
        eax = arg2 + 0x30

void* var_10c_1 = &var_108
sub_42ac7a(*(arg1 + 0xc4), eax, arg3, "%s")
sub_745f2b(__security_cookie_1)
return 0
