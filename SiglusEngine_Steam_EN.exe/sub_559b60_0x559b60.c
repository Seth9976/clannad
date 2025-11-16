// 函数: sub_559b60
// 地址: 0x559b60
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (arg2 u> 0x110)
    if (arg2 != 0x111)
        if (arg2 != 0x214)
            return 0
        
        int32_t eax_12 = GetSystemMetrics(SM_CYMAXTRACK)
        int32_t eax_13 = GetSystemMetrics(SM_CXMAXTRACK)
        int32_t eax_17 = data_20c3894 - data_20c388c
        sub_4c0c40(eax_17, arg4, arg3.d, eax_17, data_20c3898 - data_20c3890, eax_13, eax_12)
        return 1
    
    if (arg3 == 0x4f4f)
        EndDialog(data_20c3888, 0)
else
    if (arg2 == 0x110)
        data_20c3888 = arg1
        sub_559740()
        return 1
    
    if (arg2 == 5)
        uint32_t esi_3 = zx.d(arg4.w)
        uint32_t edi_4 = arg4 u>> 0x10
        sub_4c0f50(
            sub_4c0f50(
                sub_4c0f50(sub_4c0f50(arg2, edi_4, esi_3, 0x20c389c), edi_4, esi_3, 0x20c38d4), 
                edi_4, esi_3, 0x20c390c), 
            edi_4, esi_3, 0x20c3944)
        SendDlgItemMessageA(data_20c3888, 0xc350, 5, arg3.d, arg4)
        return 1
    
    if (arg2 == 0x10)
        EndDialog(data_20c3888, 0)
    else
        if (arg2 != 0x4e)
            return 0
        
        if (*(arg4 + 8) == 0xffffff9b && arg3 == 0x4f32 && (*(arg4 + 0x14) & 2) != 0)
            int32_t esi_1 = *(arg4 + 0xc)
            int32_t eax_2
            int32_t edx_1
            edx_1:eax_2 = sx.q(esi_1)
            int32_t edi_2 = (eax_2 - edx_1) s>> 1
            SendMessageA(GetDlgItem(data_20c3888, 0x4f34), 0x1009, 0, 0)
            
            if (edi_2 != 0xffffffff)
                sub_559620(edi_2, esi_1 & 1)

return 1
