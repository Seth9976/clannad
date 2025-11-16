// 函数: sub_420c20
// 地址: 0x420c20
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = arg1
void* ecx = arg2 * 0x11c
void* esi_2 = &(&data_12999a0)[arg1 * 0x7f + arg2 * 0xd]
*(ecx + 0x13127e0) = *(esi_2 + 0x80)
int32_t eax_2 = *(esi_2 + 0x84)
*(ecx + &data_13127e4) = eax_2

if (*(esi_2 + 0x5c) != 0)
    uint32_t ecx_2
    eax_2, ecx_2 = sub_420930(eax_2, arg2, arg1, nullptr)
    
    if (eax_2 == 1)
        int32_t var_18_1 = 0
        int32_t* eax_3 = sub_4254a0(eax_2, esi_2 + 0x5c, ecx_2, 0xffffffff, 0, eax_2, eax_2, eax_2)
        *(ecx + &data_13127d8) = eax_3
        return eax_3
    
    if (data_702fc0 == 0)
        void* var_18_2 = esi_2 + 0x5c
        int32_t var_1c_2 = (&data_6113c0)[arg2]
        int32_t var_20_2 = arg1
        sub_4c84d0(&data_7027c0, 0x613f88)
        return sub_446a50()

return eax_2
