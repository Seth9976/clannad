// 函数: sub_4d82f0
// 地址: 0x4d82f0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
HBRUSH result = __security_cookie ^ &__saved_ebp
HBRUSH result_1 = result
int32_t esi = data_1332b58

if (data_1c0529d != 0 || data_1321ec8 != 0 || data_1332b3c != 0 || data_1af0f24 != 0
        || data_1332b38 != 0 || data_1af0f20 != 0 || data_1332b34 != 0 || data_1af0f30 != 0
        || data_1b8a71c == 0x3e7)
    result = CreateSolidBrush(0)
    HBRUSH hbr = result
    HBRUSH hbr_1 = hbr
    
    if (hbr != 0)
        int32_t ebx_1 = arg5
        int32_t ecx = arg2
        
        if (ecx s> ebx_1)
            int32_t eax_3 = ecx
            ecx = ebx_1
            ebx_1 = eax_3
        
        int32_t esi_1 = arg4
        int32_t edi_1 = arg6
        
        if (esi_1 s> edi_1)
            int32_t eax_4 = esi_1
            esi_1 = edi_1
            edi_1 = eax_4
        
        int32_t var_28_1
        
        if (ecx s>= 0)
            if (ecx s> data_1332b5c - 1)
                ecx = data_1332b5c - 1
            
            var_28_1 = ecx
        else
            var_28_1 = 0
            hbr = hbr_1
        
        if (esi_1 s< 0)
            esi_1 = 0
        else if (esi_1 s> esi - 1)
            esi_1 = esi - 1
        
        if (ebx_1 s< 0)
            ebx_1 = 0
        else if (ebx_1 s> data_1332b5c - 1)
            ebx_1 = data_1332b5c - 1
        
        if (edi_1 s< 0)
            edi_1 = 0
        else if (edi_1 s> esi - 1)
            edi_1 = esi - 1
        
        RECT lprc
        lprc.left = 0
        int32_t edi
        lprc.right = edi
        
        if (esi_1 s> 0)
            lprc.top = 0
            lprc.bottom = esi_1
            FillRect(arg3, &lprc, hbr)
        
        if (edi_1 s< esi - 1)
            lprc.top = edi_1 + 1
            lprc.bottom = esi
            FillRect(arg3, &lprc, hbr_1)
        
        lprc.top = esi_1
        lprc.bottom = edi_1 + 1
        
        if (var_28_1 s> 0)
            lprc.right = var_28_1
            lprc.left = 0
            FillRect(arg3, &lprc, hbr_1)
        
        if (ebx_1 s< data_1332b5c - 1)
            lprc.left = ebx_1 + 1
            lprc.right = edi
            FillRect(arg3, &lprc, hbr_1)
        
        result = DeleteObject(hbr_1)

sub_5f02dd(result_1 ^ &__saved_ebp)
return result
