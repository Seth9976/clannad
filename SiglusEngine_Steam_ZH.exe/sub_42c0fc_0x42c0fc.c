// 函数: sub_42c0fc
// 地址: 0x42c0fc
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

uint32_t __security_cookie_1 = __security_cookie
int32_t edi
int32_t var_114 = edi
int32_t* ecx = *(arg1 + 0x26c)
char* i = *ecx
sub_42a6ee(ecx)

if (*(arg1 + 0x50) != 0)
    for (; i u< **(arg1 + 0x26c); i = &i[1])
        int32_t* eax
        eax.b = *i
        
        if (eax.b != 0x20 && eax.b != 9)
            break
    
    int32_t i_1 = 0
    void* edx_1 = &i[2]
    void* eax_1 = &i[1]
    char var_108[0x100]
    
    do
        int32_t ebx_1 = **(arg1 + 0x26c)
        
        if (i u>= ebx_1)
            break
        
        int32_t* ecx_1
        ecx_1.b = *i
        
        if (ecx_1.b != 0x5c)
        label_42c194:
            
            if (ecx_1.b != 0xd)
                int32_t i_2 = i_1
                i_1 += 1
                var_108[i_2] = ecx_1.b
            
            i = &i[1]
            eax_1 += 1
            edx_1 += 1
        else if (eax_1 u>= ebx_1 || *eax_1 != 0xa)
            if (ecx_1.b != 0x5c || edx_1 u>= ebx_1 || *eax_1 != 0xd || *edx_1 != 0xa)
                goto label_42c194
            
            i = &i[3]
            eax_1 += 3
            edx_1 += 3
        else
            i = &i[2]
            eax_1 += 2
            edx_1 += 2
    while (i_1 u< 0xff)
    
    var_108[i_1] = 0
    char (* var_11c_1)[0x100] = &var_108
    sub_42aba3(arg1 + 0x18, arg1 + 0x278, 0, "error: %s")
    *(arg1 + 0x48) = 1
    *(arg1 + 0x44) = 1

sub_745f2b(__security_cookie_1)
return 0
