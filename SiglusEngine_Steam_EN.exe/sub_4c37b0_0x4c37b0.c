// 函数: sub_4c37b0
// 地址: 0x4c37b0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

char* ecx = __chkstk(0x120c)
int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
char i_1
sub_4cfd70(&i_1, ecx)
char* ecx_2 = &i_1
char i

while (true)
    i = *ecx_2
    
    if (i u>= 0x80 && (i u< 0xa0 || i u> 0xdf) && i u< 0xfe)
        ecx_2 = &ecx_2[2]
        continue
    
    if (i == 0)
        break
    
    if (i u>= 0x61 && i u<= 0x7a)
        *ecx_2 = i - 0x20
    
    ecx_2 = &ecx_2[1]

i = i_1
char var_120f
ecx_2.b = var_120f
char var_120e
char i_2

if (i u>= 0x41 && i u<= 0x5a && ecx_2.b == 0x3a)
    if (var_120e != 0 && (var_120e != 0x5c || i_2 != 0))
        sub_5f02dd(eax_1 ^ &__saved_ebp)
        return 0
    
    sub_5f02dd(eax_1 ^ &__saved_ebp)
    return 1

if (i != 0x5c || ecx_2.b != i || var_120e == 0)
    sub_5f02dd(eax_1 ^ &__saved_ebp)
    return 2

i = i_2
char* ecx_7 = &i_2

if (i != 0)
    while (i != 0x5c)
        i = ecx_7[1]
        ecx_7 = &ecx_7[1]
        
        if (i == 0)
            sub_5f02dd(eax_1 ^ &__saved_ebp)
            return 1
    
    if (ecx_7[1] != 0)
        i = ecx_7[2]
        void* ecx_10 = &ecx_7[2]
        
        if (i != 0)
            do
                if (i == 0x5c)
                    int32_t result
                    result.b = *(ecx_10 + 1) == 0
                    sub_5f02dd(eax_1 ^ &__saved_ebp)
                    return result
                
                i = *(ecx_10 + 1)
                ecx_10 += 1
            while (i != 0)
            
            sub_5f02dd(eax_1 ^ &__saved_ebp)
            return 1

sub_5f02dd(eax_1 ^ &__saved_ebp)
return 1
