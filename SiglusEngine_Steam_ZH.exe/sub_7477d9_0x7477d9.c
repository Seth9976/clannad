// 函数: sub_7477d9
// 地址: 0x7477d9
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
uint32_t* eax_3 = __getptd()
uint32_t var_1e0 = 0

if (arg1 == 0)
label_74783c:
    sub_745f2b(eax_1 ^ &__saved_ebp)
    return nullptr

int32_t eax_6 = _wcsncpy_s(arg4, arg5, &eax_3[0xbb], 0x55)

if (eax_6 == 0)
    if (*arg1 != 0x43 || arg1[1] != eax_6.w)
        int32_t eax_8 = _wcslen(arg1)
        
        if (eax_8 u< 0x83)
            if (_wcscmp(eax_3 + 0x1be, arg1) == 0)
                goto label_747a6a
            
            if (_wcscmp(&eax_3[0x2e], arg1) == 0)
                goto label_747a6a
            
            goto label_7478f2
        
    label_7478f2:
        int32_t edi_2 = data_4ecd298 ^ __security_cookie
        int32_t edi_3 = neg.d(edi_2)
        void var_1d4
        void* edi_7
        
        if (sub_747681(&var_1d4, arg1) != 0)
            edi_7 = &eax_3[0x2d]
        label_74798c:
            
            if (sub_755279(arg1) == 0)
                if (_wcsncpy_s(&eax_3[0xbb], 0x55, arg4, _wcslen(arg4) + 1) == 0)
                    goto label_74783c
            else
                int32_t eax_17 = sub_75521f(arg1, 0x20001004, &var_1e0, 2)
                uint32_t eax_18
                
                if (eax_17 != 0)
                    eax_18 = var_1e0
                
                if (eax_17 == 0 || eax_18 == 0)
                    eax_18 = GetACP()
                    var_1e0 = eax_18
                
                *edi_7 = zx.d(eax_18.w)
                
                if (_wcsncpy_s(eax_3 + 0x1be, 0x83, arg1, eax_8 + 1) == 0
                        && _wcsncpy_s(arg4, arg5, arg1, eax_8 + 1) == 0
                        && _wcsncpy_s(&eax_3[0xbb], 0x55, arg1, eax_8 + 1) == 0)
                    goto label_747a2b
        else
            edi_7 = &eax_3[0x2d]
            void* var_204_5 = &var_1d4
            uint32_t* var_208_6 = edi_7
            void* var_20c_3 = &var_1d4
            int32_t eax_12
            
            if ((not.d(sbb.d(edi_3, edi_3, edi_2 != 0)) & 1) == 0)
                eax_12 = sub_75451b(var_20c_3, var_208_6, var_204_5)
            else
                eax_12 = sub_754d05(var_20c_3, var_208_6, var_204_5)
            
            if (eax_12 == 0)
                goto label_74798c
            
            sub_747613(eax_3 + 0x1be, 0x83, &var_1d4)
            void var_b4
            
            if (arg4 == 0)
            label_747a2b:
                
                if (*arg1 != 0 && eax_8 u< 0x83)
                    if (_wcsncpy_s(&eax_3[0x2e], 0x83, arg1, eax_8 + 1) == 0)
                        goto label_747a6a
                    
                    int32_t var_214_2
                    __builtin_memset(&var_214_2, 0, 0x14)
                    __invoke_watson()
                    noreturn
                
                eax_3[0x2e].w = 0
            label_747a6a:
                
                if (arg6 != 0)
                    sub_748840(arg6, &eax_3[0x2d], 4)
                
                if (_wcscpy_s(arg2, arg3, eax_3 + 0x1be) == 0)
                    sub_745f2b(eax_1 ^ &__saved_ebp)
                    return eax_3 + 0x1be
            else if (_wcsncpy_s(arg4, arg5, &var_b4, _wcslen(&var_b4) + 1) == 0)
                goto label_747a2b
    else
        int32_t eax_7 = _wcscpy_s(arg2, arg3, &(*U"ABCDEFXSHIJ")[2])
        
        if (eax_7 == 0)
            if (arg6 != 0)
                *arg6 = eax_7
            
            sub_745f2b(eax_1 ^ &__saved_ebp)
            return arg2

int32_t var_214_4
__builtin_memset(&var_214_4, 0, 0x14)
__invoke_watson()
noreturn
