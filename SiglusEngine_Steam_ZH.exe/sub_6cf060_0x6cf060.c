// 函数: sub_6cf060
// 地址: 0x6cf060
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t var_8 = __security_cookie ^ &__saved_ebp
int32_t i = 0
char* ecx = arg4
uint32_t edi = 0
char* var_114 = arg2
int32_t ebx = 1

if (arg2 != 0)
    int32_t eax_1
    eax_1.b = *arg2
    
    if (eax_1.b != 0)
        while (i u< 0x4f)
            arg2 = &arg2[1]
            
            if (eax_1.b u<= 0x20)
                if (eax_1.b u< 0xa1)
                    goto label_6cf0d1
                
                goto label_6cf0c7
            
            if (eax_1.b u<= 0x7e || eax_1.b u>= 0xa1)
            label_6cf0c7:
                *ecx = eax_1.b
                i += 1
                ecx = &ecx[1]
                ebx = 0
            else
            label_6cf0d1:
                
                if (ebx == 0)
                    *ecx = 0x20
                    i += 1
                    ecx = &ecx[1]
                    ebx = 1
                    
                    if (eax_1.b != 0x20)
                        edi = zx.d(eax_1.b)
                else if (edi == 0)
                    edi = zx.d(eax_1.b)
            
            eax_1.b = *arg2
            
            if (eax_1.b == 0)
                break
        
        if (i != 0 && ebx != 0)
            i -= 1
            ecx -= 1
            
            if (edi == 0)
                edi = 0x20
    
    *ecx = 0
    
    if (i != 0)
        if (*arg2 != 0)
            sub_6d4470(arg3, "keyword truncated")
            sub_745f2b(var_8 ^ &__saved_ebp)
            return i
        
        if (edi != 0)
            char var_108[0x100]
            int32_t eax_4
            uint32_t ecx_7
            int32_t edx
            eax_4, ecx_7, edx = sub_6d4310(0x20, 0x20, &var_108, 0, var_114)
            uint32_t var_124_2 = edi
            sub_6d44e0(eax_4, edx, &var_108, ecx_7)
            sub_6d4550(arg3, &var_108)
        
        sub_745f2b(var_8 ^ &__saved_ebp)
        return i
else
    *ecx = arg2.b

sub_745f2b(var_8 ^ &__saved_ebp)
return 0
