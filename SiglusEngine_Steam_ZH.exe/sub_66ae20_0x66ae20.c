// 函数: sub_66ae20
// 地址: 0x66ae20
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
char* var_60 = *arg2
int32_t eax_4 = *arg3
uint32_t var_58 = 0xffffffff
char var_54 = 0
int32_t var_50 = 1
int32_t* ecx

if (sub_66be90(ecx, &var_60) == 0 && arg4 != 0)
    int32_t var_70 = var_50
    char var_4c
    sub_66f8c0(&var_4c, 0x40, "syntax error at line %d near: ")
    void* ecx_1
    
    if (var_4c != 0)
        char* ecx_2 = &var_4c
        char i
        
        do
            i = *ecx_2
            ecx_2 = &ecx_2[1]
        while (i != 0)
        void var_4b
        ecx_1 = ecx_2 - &var_4b
    else
        ecx_1 = nullptr
    
    sub_541eb0(arg4, &var_4c, ecx_1)
    
    while (true)
        uint32_t eax_6 = var_58
        char* ecx_5 = var_60
        
        while (true)
            if (var_54 != 0)
                var_54 = 0
            label_66aed3:
                
                if (eax_6 != 0xffffffff && eax_6 != 0xa)
                    if (eax_6 s>= 0x20)
                        break
                    
                    continue
            else if (ecx_5 != eax_4)
                if (eax_6 == 0xa)
                    var_50 += 1
                
                eax_6 = zx.d(*ecx_5)
                ecx_5 = &ecx_5[1]
                var_58 = eax_6
                var_60 = ecx_5
                goto label_66aed3
            
            sub_745f2b(eax_1 ^ &__saved_ebp)
            return ecx_5
        
        int32_t edx_1 = arg4[5]
        int32_t* edi_1
        
        if (edx_1 u< 0x10)
            edi_1 = arg4
        else
            edi_1 = *arg4
        
        char* ecx_7 = arg4[4] + edi_1
        int32_t* edx_2
        
        if (edx_1 u< 0x10)
            edx_2 = arg4
        else
            edx_2 = *arg4
        
        if (ecx_7 != 0)
            sub_66f7b0(arg4, ecx_7 - edx_2, 1, eax_6.b)
        else
            sub_66f7b0(arg4, ecx_7, 1, eax_6.b)

char* eax_8 = var_60
sub_745f2b(eax_1 ^ &__saved_ebp)
return eax_8
