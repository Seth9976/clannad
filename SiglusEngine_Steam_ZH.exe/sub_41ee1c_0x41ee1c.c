// 函数: sub_41ee1c
// 地址: 0x41ee1c
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

uint32_t __security_cookie_1 = __security_cookie
int32_t eax = arg1[8]
int32_t ecx = arg1[0x1e]
int32_t ebx = arg1[0x1d]
int32_t eax_1 = arg1[0xd]
int32_t eax_2 = arg1[6]
arg1[6] = 0
arg1[0x1d] = ecx
void var_18
arg1[8] = &var_18
int32_t ecx_1 = arg1[2]
int32_t edi
int32_t var_38 = edi
int32_t edi_1 = arg1[0x1a]
arg1[0x1a] = 1
arg1[0xd] = 0xb4eb50

if (ecx_1 != 1 && ecx_1 != 4)
    int32_t ecx_2 = arg1[0x15]
    int32_t ecx_3 = arg1[0x16]
    arg1[0x15] = 1
    arg1[0x16] = &arg1[9]
    sub_41da34(arg1, &arg1[9])
    arg1[0x15] = ecx_2
    arg1[0x16] = ecx_3

(*(*arg1 + 8))(0, 0, &arg1[9])
(*(*arg1 + 4))(0, 0, &arg1[9])
arg1[8] = eax
arg1[0xd] = eax_1
arg1[0x1a] = edi_1
arg1[0x1d] = ebx
arg1[6] = eax_2
sub_745f2b(__security_cookie_1)
