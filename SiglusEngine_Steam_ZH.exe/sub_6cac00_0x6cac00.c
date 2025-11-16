// 函数: sub_6cac00
// 地址: 0x6cac00
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t var_8 = __security_cookie ^ &__saved_ebp
void* edi = arg1

if (arg2 == 0)
    *(edi + 0x78) |= 0x20000
else
    arg1 = &arg2[0xffffffff]
    int32_t esi_1 = 0
    void* ebx_1 = "1.6.21" - arg2
    void* var_8c_1 = ebx_1
    bool cond:0_1
    
    do
        int32_t eax_1
        eax_1.b = *(arg1 + 1)
        arg1 += 1
        ebx_1.b = *(ebx_1 + arg1)
        
        if (eax_1.b != ebx_1.b)
            *(edi + 0x78) |= 0x20000
        
        if (eax_1.b == 0x2e)
            esi_1 += 1
        
        if (esi_1 s>= 2)
            break
        
        if (eax_1.b == 0)
            break
        
        cond:0_1 = ebx_1.b != 0
        ebx_1 = var_8c_1
    while (cond:0_1)

if ((*(edi + 0x78) & 0x20000) == 0)
    sub_745f2b(var_8 ^ &__saved_ebp)
    return 1

int32_t i = 0
char var_88[0x80]

while (i u< 0x7f)
    arg1.b = (*"Application built with libpng-")[i]
    var_88[i] = arg1.b
    i += 1
    
    if ((*"Application built with libpng-")[i] == 0)
        break

var_88[i] = 0

if (i u< 0x80)
    if (arg2 != 0 && *arg2 != 0)
        void* edx = arg2 - i
        
        while (i u< 0x7f)
            arg1.b = *(edx + i)
            var_88[i] = arg1.b
            i += 1
            
            if (*(edx + i) == 0)
                break
    
    var_88[i] = 0
    
    if (i u< 0x80)
        void* edx_1 = " but running with " - i
        
        while (i u< 0x7f)
            arg1.b = *(edx_1 + i)
            var_88[i] = arg1.b
            i += 1
            
            if (*(edx_1 + i) == 0)
                break
        
        var_88[i] = 0
        
        if (i u< 0x80)
            char* edx_2 = "1.6.21" - i
            
            while (i u< 0x7f)
                arg1.b = edx_2[i]
                var_88[i] = arg1.b
                i += 1
                
                if (edx_2[i] == 0)
                    break
            
            var_88[i] = 0

sub_6d4470(edi, &var_88)
sub_745f2b(var_8 ^ &__saved_ebp)
return 0
