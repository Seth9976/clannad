// 函数: sub_5506a0
// 地址: 0x5506a0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (arg3 == 0xc)
    int32_t* edi_1 = data_20c2d04 + (arg2 << 3)
    sub_4d6c40(edi_1, &edi_1[1])
    char* ebx_1 = arg4
    
    if (ebx_1 != 0)
        uint32_t eax_1 = sub_4cfc80(ebx_1)
        sub_4d1c30(sub_4d6960(eax_1, &edi_1[1], edi_1, eax_1, "FDS_M_STR"), ebx_1, edi_1[1], eax_1)
else if (arg3 == 0x12)
    int32_t* esi_2 = data_20c2d0c + (arg2 << 3)
    sub_4d6c40(esi_2, &esi_2[1])
    
    if (arg4 != 0)
        sub_4cfe90(arg4, &esi_2[1], esi_2, arg4, "FDS_S_STR")
else if (arg3 == 0xffffff9d)
    int32_t* esi_3 = data_20c2d14 + (arg2 << 3)
    sub_4d6c40(esi_3, &esi_3[1])
    
    if (arg4 != 0)
        sub_4cfe90(arg4, &esi_3[1], esi_3, arg4, "FDS_NAMAE_STR")
else if (arg3 == 0xffffff9e)
    int32_t* esi_4 = data_20c2d1c + (arg2 << 3)
    sub_4d6c40(esi_4, &esi_4[1])
    
    if (arg4 != 0)
        sub_4cfe90(arg4, &esi_4[1], esi_4, arg4, "FDS_LNAMAE_STR")
