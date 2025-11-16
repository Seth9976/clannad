// 函数: sub_6cc420
// 地址: 0x6cc420
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t var_8 = __security_cookie ^ &__saved_ebp

if (arg2 != 0)
    *(arg2 + 0x4a) |= 0x8000

int32_t i = 0
char var_e4[0x6]
int32_t eax_1

while (i u< 0xc3)
    eax_1.b = (*"profile '")[i]
    var_e4[i] = eax_1.b
    i += 1
    
    if ((*"profile '")[i] == 0)
        break

var_e4[i] = 0

if (i u< i + 0x4f)
    if (arg4 != 0 && *arg4 != 0)
        int32_t edx_1 = i + 0x4e
        void* ecx_1 = arg4 - i
        
        while (i u< edx_1)
            eax_1.b = *(ecx_1 + i)
            var_e4[i] = eax_1.b
            i += 1
            
            if (*(ecx_1 + i) == 0)
                break
    
    var_e4[i] = 0

if (i u< 0xc4)
    void* ecx_3 = &data_b03394 - i
    
    while (i u< 0xc3)
        eax_1.b = *(ecx_3 + i)
        var_e4[i] = eax_1.b
        i += 1
        
        if (*(ecx_3 + i) == 0)
            break
    
    var_e4[i] = 0

uint32_t edx_2 = arg5
uint32_t eax_2

if (sub_6cc380(edx_2) == 0)
    int32_t edi_1 = 0
    char var_9 = 0
    char* ecx_6 = &var_9
    
    while (edx_2 != 0 || edi_1 s< 1)
        ecx_6 -= 1
        int32_t eax_4 = edx_2 & 0xf
        edx_2 u>>= 4
        edi_1 += 1
        eax_4.b = (*"0123456789ABCDEF")[eax_4]
        *ecx_6 = eax_4.b
        void var_20
        
        if (ecx_6 u<= &var_20)
            break
    
    if (i u< 0xc4)
        if (*ecx_6 != 0)
            char* ecx_7 = ecx_6 - i
            
            while (i u< 0xc3)
                eax_2.b = ecx_7[i]
                var_e4[i] = eax_2.b
                i += 1
                
                if (ecx_7[i] == 0)
                    break
        
        var_e4[i] = 0
        
        if (i u< 0xc4)
            char* ecx_8 = &data_b033d0 - i
            
            while (i u< 0xc3)
                eax_2.b = ecx_8[i]
                var_e4[i] = eax_2.b
                i += 1
                
                if (ecx_8[i] == 0)
                    break
            
            var_e4[i] = 0
else
    sub_6cc2d0(&var_e4[i], edx_2)
    void var_de
    *(&var_de + i) = 0x203a
    i += 8

if (i u< 0xc4)
    if (arg6 != 0 && *arg6 != 0)
        void* ecx_10 = arg6 - i
        
        while (i u< 0xc3)
            eax_2.b = *(ecx_10 + i)
            var_e4[i] = eax_2.b
            i += 1
            
            if (*(ecx_10 + i) == 0)
                break
    
    var_e4[i] = 0

int32_t eax_5
eax_5.b = arg2 != 0
sub_6d4890(eax_5 + 1, &var_e4, arg3, eax_5 + 1)
sub_745f2b(var_8 ^ &__saved_ebp)
return 0
