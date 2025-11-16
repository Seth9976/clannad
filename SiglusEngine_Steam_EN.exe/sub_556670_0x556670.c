// 函数: sub_556670
// 地址: 0x556670
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

char* result = data_20c2e7c - 1

if (result u<= 0x270e)
    LRESULT eax_1 = SendMessageA(GetDlgItem(data_20c2e68, 0x4f33), 0x102c, arg1, 0xf000)
    int32_t esi_1 = data_20c2e7c
    int32_t edi_4 = neg.d((eax_1 u>> 0xc) - 1)
    int32_t edi_6 = neg.d(sbb.d(edi_4, edi_4, eax_1 u>> 0xc != 1))
    int32_t ecx_1
    result, ecx_1 = sub_494940(esi_1, arg1)
    
    if (edi_6 != result)
        int32_t eax_2
        int32_t edx_3
        
        if (edi_6 == 0)
            edx_3 = sub_494b90(ecx_1, arg1)
            eax_2 = esi_1 * 9
            *((eax_2 << 2) + &data_1b8c8b0) -= 1
        else
            edx_3 = sub_494b00(esi_1, arg1)
            eax_2 = esi_1 * 9
            *((eax_2 << 2) + &data_1b8c8b0) += 1
        
        return sub_556410(eax_2, edx_3, data_20c2e68, data_20c2e80, esi_1)

return result
