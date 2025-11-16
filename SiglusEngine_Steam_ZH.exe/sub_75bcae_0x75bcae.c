// 函数: sub_75bcae
// 地址: 0x75bcae
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx
int32_t var_8 = ecx
int32_t var_c = ecx
int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
int32_t edi
int32_t var_18 = edi
int32_t result_1 = 0
uint32_t CodePage = *(*arg1 + 4)
int32_t eax_4 = sub_75521f(arg2, arg3, nullptr, 0)
int32_t result

if (eax_4 != 0)
    int32_t ecx_1
    
    if (eax_4 s> 0 && divu.dp.d(0:0xffffffe0, eax_4) u>= 2)
        ecx_1 = eax_4 * 2
    
    wchar16* lpWideCharStr
    
    if (eax_4 s<= 0 || divu.dp.d(0:0xffffffe0, eax_4) u< 2 || ecx_1 + 8 u<= ecx_1)
        lpWideCharStr = nullptr
    label_75bd3d:
        
        if (lpWideCharStr == 0)
            result = 0
        else
            if (sub_75521f(arg2, arg3, lpWideCharStr, eax_4) != 0)
                PSTR lpMultiByteStr
                int32_t cbMultiByte
                
                if (arg5 != 0)
                    cbMultiByte = arg5
                    lpMultiByteStr = arg4
                else
                    cbMultiByte = 0
                    lpMultiByteStr = nullptr
                
                result_1 = WideCharToMultiByte(CodePage, 0, lpWideCharStr, 0xffffffff, 
                    lpMultiByteStr, cbMultiByte, nullptr, nullptr)
            
            sub_5cd460(lpWideCharStr)
            result = result_1
    else
        int32_t* esi_1
        
        if ((eax_4 << 1) + 8 u> 0x400)
            esi_1 = _malloc((eax_4 << 1) + 8)
            
            if (esi_1 != 0)
                *esi_1 = 0xdddd
            label_75bd36:
                lpWideCharStr = &esi_1[2]
                goto label_75bd3d
            
            result = 0
        else
            __alloca_probe_16((eax_4 << 1) + 8)
            esi_1 = &var_18
            
            if (&var_18 != 0)
                var_18 = 0xcccc
                goto label_75bd36
            
            result = 0
else
    result = 0

sub_745f2b(eax_1 ^ &__saved_ebp)
return result
