// 函数: sub_48db10
// 地址: 0x48db10
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

WPARAM ecx = *arg3

if (ecx s<= 0)
    return 0

LRESULT eax = sub_55c680(ecx)
*arg3 -= 1
void* esi_1 = *arg3 * 0x4ec + arg3
sub_4d1c30(eax, esi_1 + 0x50, &data_715e9c, 0xa0)
sub_4d1c30(eax, esi_1 + 0xf0, 0x715f3c, 0x400)
*arg2 = *(esi_1 + 4)
*arg4 = *(esi_1 + 8)
*arg5 = *(esi_1 + 0xc)
*arg6 = *(esi_1 + 0x10)
*arg7 = *(esi_1 + 0x14)
sub_4d1c30(arg7, esi_1 + 0x1c, arg8, 0x20)
int32_t* ecx_7 = *(esi_1 + 0x18)
HWND edx_3 = data_1af0a4c
*arg9 = ecx_7
WPARAM esi_2 = *arg3

if (edx_3 != 0 && esi_2 u<= 0x3f)
    int32_t var_18_1 = 1
    sub_4c1300(sub_55bf30(esi_2 * 0x4ec + 0x719ba8, edx_3, esi_2, ecx_7, esi_2 * 0x4ec + 0x719ba8), 
        data_1af0a4c, esi_2, 0x4f32, 0xffffffff)

return 1
