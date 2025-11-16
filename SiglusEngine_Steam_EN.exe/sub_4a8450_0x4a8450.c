// 函数: sub_4a8450
// 地址: 0x4a8450
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t result = *(arg1 + 8)

if (result == 0)
    return result

data_1bfe294 = result
void* var_c = nullptr
void* lpMultiByteStr = nullptr
BOOL eax_1 = sub_4bb540(&lpMultiByteStr, &var_c, arg1 + 0xc, &lpMultiByteStr)
sub_4d6560(eax_1, eax_1, var_c, "THUMBNAILTABLE_TMP")
int32_t eax_3 = data_1bfe294 << 7
sub_4d6960(eax_3, &data_1bfe29c, &data_1bfe298, eax_3, "THUMBNAILTABLE_LIST")
PSTR lpMultiByteStr_1 = data_1bfe29c
wchar16* lpWideCharStr = lpMultiByteStr
int32_t var_10_1 = 0

if (data_1bfe294 s> 0)
    lpMultiByteStr = &lpMultiByteStr_1[0x40]
    
    while (true)
        int32_t cbMultiByte =
            WideCharToMultiByte(0, 0, lpWideCharStr, 0xffffffff, nullptr, 0, nullptr, nullptr)
        
        if (cbMultiByte s> 0)
            WideCharToMultiByte(0, 0, lpWideCharStr, 0xffffffff, lpMultiByteStr_1, cbMultiByte, 
                nullptr, nullptr)
            lpMultiByteStr_1[cbMultiByte] = 0
        
        char* lpMultiByteStr_2 = lpMultiByteStr_1
        
        if (lpMultiByteStr_1 != 0)
            while (true)
                cbMultiByte.b = *lpMultiByteStr_2
                
                if (cbMultiByte.b u>= 0x80 && (cbMultiByte.b u< 0xa0 || cbMultiByte.b u> 0xdf)
                        && cbMultiByte.b u< 0xfe)
                    lpMultiByteStr_2 = &lpMultiByteStr_2[2]
                    continue
                
                if (cbMultiByte.b == 0)
                    break
                
                if (cbMultiByte.b u>= 0x61 && cbMultiByte.b u<= 0x7a)
                    cbMultiByte.b -= 0x20
                    *lpMultiByteStr_2 = cbMultiByte.b
                
                lpMultiByteStr_2 = &lpMultiByteStr_2[1]
        
        wchar16* lpWideCharStr_1 = lpWideCharStr
        void* edx_3 = &lpWideCharStr_1[1]
        
        do
            cbMultiByte.w = *lpWideCharStr_1
            lpWideCharStr_1 = &lpWideCharStr_1[1]
        while (cbMultiByte.w != 0)
        
        int32_t cbMultiByte_1 = WideCharToMultiByte(0, 0, 
            &lpWideCharStr[((lpWideCharStr_1 - edx_3) s>> 1) + 1], 0xffffffff, nullptr, 0, nullptr, 
            nullptr)
        
        if (cbMultiByte_1 s> 0)
            WideCharToMultiByte(0, 0, &lpWideCharStr[((lpWideCharStr_1 - edx_3) s>> 1) + 1], 
                0xffffffff, lpMultiByteStr, cbMultiByte_1, nullptr, nullptr)
            lpMultiByteStr_1[cbMultiByte_1 + 0x40] = 0
        
        char* lpMultiByteStr_3 = lpMultiByteStr
        char* lpMultiByteStr_4 = lpMultiByteStr_3
        
        if (lpMultiByteStr_3 != 0)
            while (true)
                cbMultiByte_1.b = *lpMultiByteStr_4
                
                if (cbMultiByte_1.b u>= 0x80 && (cbMultiByte_1.b u< 0xa0 || cbMultiByte_1.b u> 0xdf)
                        && cbMultiByte_1.b u< 0xfe)
                    lpMultiByteStr_4 = &lpMultiByteStr_4[2]
                    continue
                
                if (cbMultiByte_1.b == 0)
                    break
                
                if (cbMultiByte_1.b u>= 0x61 && cbMultiByte_1.b u<= 0x7a)
                    cbMultiByte_1.b -= 0x20
                    *lpMultiByteStr_4 = cbMultiByte_1.b
                
                lpMultiByteStr_4 = &lpMultiByteStr_4[1]
        
        void* ecx_4 = &lpWideCharStr[((lpWideCharStr_1 - edx_3) s>> 1) + 1]
        void* edx_4 = ecx_4 + 2
        
        do
            cbMultiByte_1.w = *ecx_4
            ecx_4 += 2
        while (cbMultiByte_1.w != 0)
        
        int32_t eax_6 = var_10_1 + 1
        var_10_1 = eax_6
        lpMultiByteStr_1 -= 0xffffff80
        lpMultiByteStr = lpMultiByteStr_3 + 0x80
        lpWideCharStr =
            &lpWideCharStr[((lpWideCharStr_1 - edx_3) s>> 1) + 1 + ((ecx_4 - edx_4) s>> 1) + 1]
        
        if (eax_6 s>= data_1bfe294)
            break

return sub_4d6c40(&var_c, &lpMultiByteStr)
