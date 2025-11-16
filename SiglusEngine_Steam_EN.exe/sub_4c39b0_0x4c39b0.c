// 函数: sub_4c39b0
// 地址: 0x4c39b0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
int32_t ebx = 0
void pathName
void* esi = &pathName
int32_t var_21c = 0
char* edi = arg1

if (sub_4c3da0(eax_1, 0xffffffff, arg1, 0xffffffff) == 0)
    if (*edi == 0)
    label_4c3a9c:
        *esi = 0
        
        if (ebx s> 2)
            int32_t eax_2 = sub_4c37b0()
            
            if (eax_2 != 1)
                SECURITY_ATTRIBUTES* lpSecurityAttributes_1 =
                    sub_4c3da0(eax_2, 0xffffffff, &pathName, 0xffffffff)
                
                if (lpSecurityAttributes_1 == 0
                    && CreateDirectoryA(&pathName, lpSecurityAttributes_1) == 0)
                label_4c3ae7:
                    sub_5f02dd(eax_1 ^ &__saved_ebp)
                    return 0
    else
        int32_t ecx
        
        do
            BOOL lpSecurityAttributes
            lpSecurityAttributes.b = *edi
            
            if (lpSecurityAttributes.b u< 0x80)
            label_4c3a18:
                
                if (lpSecurityAttributes.b == 0x2e)
                    ecx = 1
                    *esi = lpSecurityAttributes.b
                    esi += 1
                    var_21c = 1
                    edi = &edi[1]
                    ebx += 1
                else if (lpSecurityAttributes.b != 0x5c)
                    *esi = lpSecurityAttributes.b
                    edi = &edi[1]
                    esi += 1
                    ebx += 1
                    ecx = var_21c
                else
                    *esi = 0
                    
                    if (ebx s> 2)
                        lpSecurityAttributes = sub_4c37b0()
                        
                        if (lpSecurityAttributes != 1)
                            lpSecurityAttributes =
                                sub_4c3da0(lpSecurityAttributes, 0xffffffff, &pathName, 0xffffffff)
                            
                            if (lpSecurityAttributes == 0
                                    && CreateDirectoryA(&pathName, lpSecurityAttributes) == 0)
                                goto label_4c3ae7
                    
                    lpSecurityAttributes.b = *edi
                    ecx = 0
                    *esi = lpSecurityAttributes.b
                    edi = &edi[1]
                    esi += 1
                    var_21c = 0
                    ebx += 1
            else
                if (lpSecurityAttributes.b u< 0xa0)
                    if (lpSecurityAttributes.b u>= 0xfe)
                        goto label_4c3a18
                    
                    goto label_4c3a05
                
                if (lpSecurityAttributes.b u<= 0xdf || lpSecurityAttributes.b u>= 0xfe)
                    goto label_4c3a18
                
            label_4c3a05:
                *esi = lpSecurityAttributes.b
                lpSecurityAttributes.b = edi[1]
                edi = &edi[2]
                *(esi + 1) = lpSecurityAttributes.b
                esi += 2
                ebx += 2
                ecx = var_21c
        while (*edi != 0)
        
        if (ecx == 0)
            goto label_4c3a9c

sub_5f02dd(eax_1 ^ &__saved_ebp)
return 1
