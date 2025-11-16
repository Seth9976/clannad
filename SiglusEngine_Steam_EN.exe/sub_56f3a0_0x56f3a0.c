// 函数: sub_56f3a0
// 地址: 0x56f3a0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

LRESULT result = data_20efcc4

if ((&data_1af0a10)[result] != 0)
    WPARAM eax = sub_4c1810(data_20efcc0, 0x4f32)
    LRESULT eax_2 = SendMessageA(GetDlgItem(data_20efcc0, 0x4f32), 0x1027, 0, 0)
    int32_t ecx_1 = data_20efcd4
    LRESULT ebx_1
    WPARAM edi_1
    
    if (ecx_1 s< 0 || ecx_1 s>= data_20efcd0)
        edi_1 = 0xffffffff
        ebx_1 = 0
    else
        edi_1 = sub_4c1810(data_20efcc0, 0x4f33)
        ebx_1 = SendMessageA(GetDlgItem(data_20efcc0, 0x4f33), 0x1027, 0, 0)
    
    LRESULT eax_6
    int32_t edx_1
    eax_6, edx_1 = sub_56f080()
    sub_5562a0(eax_6, edx_1, data_20efcc0, data_20efcd0, data_20efccc)
    result = sub_4c1470(sub_4c1470(sub_56f100(data_20efcd4), eax, eax_2, data_20efcc0, 0x4f32), 
        edi_1, ebx_1, data_20efcc0, 0x4f33)
    
    if (arg1 != 0)
        HWND hDlg = data_20efcc0
        data_63fe98 = 0xffffffff
        data_63fe94 = 0xffffffff
        return EnableWindow(GetDlgItem(hDlg, 0x4fd6), 0)

return result
