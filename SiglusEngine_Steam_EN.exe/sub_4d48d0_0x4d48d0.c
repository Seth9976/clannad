// 函数: sub_4d48d0
// 地址: 0x4d48d0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
uint8_t var_808[0x7ff]
GetClassNameA(arg1, &var_808, 0x7ff)
char var_9 = 0
int32_t eax_2 = lstrlenA(&var_808)
int32_t edi = data_20c04e8

if (edi == eax_2)
    char* ecx_1 = &var_808
    
    while (true)
        eax_2.b = *ecx_1
        
        if (eax_2.b u>= 0x80 && (eax_2.b u< 0xa0 || eax_2.b u> 0xdf) && eax_2.b u< 0xfe)
            ecx_1 = &ecx_1[2]
            continue
        
        if (eax_2.b == 0)
            break
        
        if (eax_2.b u>= 0x61 && eax_2.b u<= 0x7a)
            eax_2.b -= 0x20
            *ecx_1 = eax_2.b
        
        ecx_1 = &ecx_1[1]
    
    int32_t edx_1 = 0
    
    if (edi s> 0)
        void* esi_1 = nullptr
        
        do
            ecx_1.b = *(&var_808 + esi_1)
            esi_1 += 1
            eax_2.b = *(esi_1 + 0x20c02df)
            
            if (ecx_1.b != eax_2.b)
                break
            
            edx_1 += 1
        while (edx_1 s< edi)
    
    if (edx_1 == edi)
        data_20c02d8 = arg1
        data_20c02a8 = 1
        sub_5f02dd(eax_1 ^ &__saved_ebp)
        return 0

sub_5f02dd(eax_1 ^ &__saved_ebp)
return 1
