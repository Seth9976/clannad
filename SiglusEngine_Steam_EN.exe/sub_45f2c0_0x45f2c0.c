// 函数: sub_45f2c0
// 地址: 0x45f2c0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t result = __security_cookie ^ &__saved_ebp
int32_t result_1 = result
int32_t* edi = arg3
int32_t* var_64 = edi

if (*edi != 0 && edi[5] == 0)
    char* ecx = edi[1]
    BOOL (__stdcall* const ebx)(HANDLE hSemaphore, int32_t lReleaseCount, int32_t* lpPreviousCount)
    ebx.b = *ecx
    ebx:1.b = ecx[1]
    result.b = ecx[2]
    char var_36_1 = ebx.b
    char var_35_1 = ebx:1.b
    char var_37_1 = result.b
    
    if (ecx != 0)
        int32_t edx = edi[3]
        
        if (edx != 0)
            int32_t edi_1 = edi[4]
            
            if (edi_1 != 0 && (edx s> 0 || edi_1 s> 0))
                uint32_t eax_3 = zx.d(*ecx)
                sub_429990(eax_3, edx, ecx, edi_1, eax_3.b, ecx[1], ecx[2])
            
            edi = var_64
    
    HDC eax_4 = GetDC(data_7027bc)
    bool cond:0_1 = *(arg2 + 8) s<= 0x20
    HGLOBAL hMem_3 = nullptr
    BOOL pjBits = 0
    HGLOBAL hMem_4 = nullptr
    BOOL lpBits = 0
    HGLOBAL hMem_5 = nullptr
    BOOL lpBits_1 = 0
    
    if (not(cond:0_1))
        *(arg2 + 8) = 0x20
    
    int32_t i_2 = *(arg2 + 8)
    int32_t i_1 = i_2
    int32_t var_68_1 = 8
    
    if (i_2 s> 0)
        void* eax_5 = arg2 + 0x14
        void* var_60_1 = eax_5
        int32_t* edi_2 = edi
        int32_t i
        
        do
            BOOL eax_6
            int32_t ecx_2
            eax_6, ecx_2 = sub_4d6960(eax_5, &pjBits, &hMem_3, 0x1000, "GRDAT_MW_MOUSECUR_TMP")
            BOOL pjBits_1 = pjBits
            int32_t var_a0_3 = 0
            int32_t var_a4_2 = 0xff
            int32_t var_a8_2 = 0
            int32_t var_ac_2 = 0
            int32_t var_b0_1 = 0
            sub_584980(eax_6, 0x20, pjBits_1, 0x20, edi_2[1], edi_2[3], edi_2[4], var_68_1, 8, 0, 
                0, 0, 0, 0, 0x1f, 0x1f, ecx_2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, nullptr)
            BOOL pjBits_2 = pjBits_1
            int32_t var_3c_1 = 0x20
            bool cond:1_1
            
            do
                int32_t edx_2
                edx_2.b = var_37_1
                int32_t j_3 = 0x20
                int32_t j
                
                do
                    if (*pjBits_2 == ebx.b && *(pjBits_2 + 1) == ebx:1.b
                            && *(pjBits_2 + 2) == edx_2.b)
                        *pjBits_2 = 0
                    
                    pjBits_2 += 4
                    j = j_3
                    j_3 -= 1
                while (j != 1)
                cond:1_1 = var_3c_1 != 1
                var_3c_1 -= 1
            while (cond:1_1)
            sub_4d6960(sub_4d6960(pjBits_2, &lpBits, &hMem_4, 0x80, "GRDAT_MW_MOUSECUR_MASKTMP"), 
                &lpBits_1, &hMem_5, 0x80, "GRDAT_MW_MOUSECUR_MONOTMP")
            BOOL lpBits_2 = lpBits_1
            int32_t* eax_9 = lpBits - lpBits_2
            BOOL lpBits_3 = lpBits_2
            int32_t j_2 = 0x20
            int32_t j_1
            
            do
                int32_t k_1 = 0x20
                int32_t ebx_1 = 0
                int32_t edi_4 = 0
                int32_t k_2 = 0x20
                int32_t var_48_1
                int32_t var_40_1
                int32_t k
                
                do
                    ebx_1 *= 2
                    edi_4 *= 2
                    var_48_1 = ebx_1
                    var_40_1 = edi_4
                    
                    if (*(pjBits_1 + 3) u>= 0x80)
                        k_1 = k_2
                        
                        if (zx.d(*(pjBits_1 + 1)) * 0x3b + zx.d(*(pjBits_1 + 2)) * 0x1e
                                + zx.d(*pjBits_1) * 0xb s>= 0x319c)
                            edi_4 |= 1
                            var_40_1 = edi_4
                    else
                        var_48_1 = ebx_1 | 1
                        *pjBits_1 = 0
                        ebx_1 = var_48_1
                        edi_4 = var_40_1
                    
                    pjBits_1 += 4
                    k = k_1
                    k_1 -= 1
                    k_2 = k_1
                while (k != 1)
                int32_t eax_17 = _bswap(var_48_1)
                int32_t eax_19 = _bswap(var_40_1)
                *(eax_9 + lpBits_3) = eax_17
                *lpBits_3 = eax_19
                j_1 = j_2
                j_2 -= 1
                lpBits_3 += 4
            while (j_1 != 1)
            int32_t var_34 = 0x28
            int32_t var_30_1 = 0x20
            int32_t var_2c_1 = 0xffffffe0
            int32_t var_28_1 = 0x200001
            int32_t var_24_1 = 0
            int32_t var_20_1 = 0x1000
            int32_t var_1c_1 = 0
            int32_t var_18_1 = 0
            int32_t var_14_1 = 0
            int32_t var_10_1 = 0
            HBITMAP ho = CreateDIBitmap(eax_4, &var_34, 4, pjBits, &var_34, DIB_RGB_COLORS)
            HBITMAP ho_1 = CreateBitmap(0x20, 0x20, 1, 1, lpBits)
            HGDIOBJ ho_2 = CreateBitmap(0x20, 0x20, 1, 1, lpBits_1)
            ICONINFO piconinfo
            piconinfo.fIcon = 0
            piconinfo.xHotspot = arg4
            piconinfo.yHotspot = arg5
            piconinfo.hbmColor = ho
            piconinfo.hbmMask = ho_1
            HICON eax_25 = CreateIconIndirect(&piconinfo)
            piconinfo.fIcon = 0
            piconinfo.hbmColor = ho_2
            piconinfo.hbmMask = ho_1
            *(var_60_1 - 4) = eax_25
            piconinfo.xHotspot = arg4
            piconinfo.yHotspot = arg5
            *var_60_1 = CreateIconIndirect(&piconinfo)
            DeleteObject(ho)
            DeleteObject(ho_1)
            eax_5 = DeleteObject(ho_2)
            var_68_1 += 0x20
            HGLOBAL hMem_2 = hMem_3
            
            if (hMem_2 != 0)
                int32_t esi_1 = data_1af413c
                
                if (esi_1 != 0)
                    WaitForSingleObject(data_7027a8, 0xffffffff)
                    eax_5 = sub_4d6b80(&hMem_3)
                
                if (esi_1 == 0 || eax_5.b != 0)
                    GlobalUnlock(hMem_2)
                    eax_5 = GlobalFree(hMem_2)
                    hMem_3 = nullptr
                    pjBits = 0
                    
                    if (esi_1 != 0)
                        sub_4d6500()
                        eax_5 = ReleaseSemaphore(data_7027a8, 1, nullptr)
            else
                pjBits = hMem_2
            
            HGLOBAL hMem = hMem_4
            
            if (hMem != 0)
                int32_t edi_6 = data_1af413c
                
                if (edi_6 != 0)
                    WaitForSingleObject(data_7027a8, 0xffffffff)
                    eax_5 = sub_4d6b80(&hMem_4)
                
                if (edi_6 == 0 || eax_5.b != 0)
                    GlobalUnlock(hMem)
                    eax_5 = GlobalFree(hMem)
                    hMem_4 = nullptr
                    lpBits = 0
                    
                    if (edi_6 != 0)
                        sub_4d6500()
                        eax_5 = ReleaseSemaphore(data_7027a8, 1, nullptr)
            else
                lpBits = hMem
            
            HGLOBAL hMem_1 = hMem_5
            
            if (hMem_1 != 0)
                int32_t edi_7 = data_1af413c
                
                if (edi_7 != 0)
                    WaitForSingleObject(data_7027a8, 0xffffffff)
                    eax_5 = sub_4d6b80(&hMem_5)
                
                if (edi_7 == 0 || eax_5.b != 0)
                    GlobalUnlock(hMem_1)
                    eax_5 = GlobalFree(hMem_1)
                    hMem_5 = nullptr
                    lpBits_1 = 0
                    
                    if (edi_7 != 0)
                        sub_4d6500()
                        eax_5 = ReleaseSemaphore(data_7027a8, 1, nullptr)
            else
                lpBits_1 = hMem_1
            
            var_60_1 += 8
            i = i_1
            i_1 -= 1
            ebx.b = var_36_1
            ebx:1.b = var_35_1
            edi_2 = var_64
        while (i != 1)
    
    result = ReleaseDC(data_7027bc, eax_4)

sub_5f02dd(result_1 ^ &__saved_ebp)
return result
