// 函数: sub_6bdb60
// 地址: 0x6bdb60
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
int32_t ebx = arg2
char* edx = arg3

if (ebx u> 0x40)
    void var_170
    void* ecx = &var_170
    sub_6bf720(sub_6bf650(ecx), edx, ecx, ebx)
    void var_20
    sub_6bf6a0(&var_170, &var_20)
    edx = &var_20
    ebx = 0x14

int32_t i = 0
char var_148[0x40]
int32_t edx_2 = edx - &var_148
uint32_t eax_6

do
    if (i u>= ebx)
        eax_6 = 0
    else
        eax_6 = zx.d(var_148[edx_2 + i])
    
    eax_6.b ^= 0x36
    var_148[i] = eax_6.b
    i += 1
while (i u< 0x40)

int32_t ecx_2 = 0
int32_t var_f4 = 0
int32_t var_f0 = 0
char (* edi)[0x40] = &var_148
int32_t var_ec = 0
int32_t i_1 = 0x40
int32_t var_108
__builtin_memcpy(&var_108, 
    "\x01\x23\x45\x67\x89\xab\xcd\xef\xfe\xdc\xba\x98\x76\x54\x32\x10\xf0\xe1\xd2\xc3", 0x14)
int32_t var_a8 = 0
uint32_t var_a4 = 0

do
    i_1 -= 1
    
    if (var_a4 != 0)
        break
    
    eax_6.b = *edi
    char var_e8[0x40]
    var_e8[ecx_2] = eax_6.b
    ecx_2 = var_ec + 1
    int32_t temp0_1 = var_f4
    var_f4 += 8
    var_ec = ecx_2
    
    if (temp0_1 == 0xfffffff8)
        int32_t temp1_1 = var_f0
        var_f0 += 1
        eax_6 = var_a4
        
        if (temp1_1 == 0xffffffff)
            eax_6 = 1
        
        var_a4 = eax_6
    
    if (ecx_2 == 0x40)
        sub_6bf7a0(&var_108)
        ecx_2 = var_ec
    
    edi = &(*edi)[1]
while (i_1 != 0)

if (arg5 != 0)
    sub_6bf720(arg5, arg4, &var_108, arg5)

void var_34
sub_6bf6a0(&var_108, &var_34)
uint32_t eax_9

for (int32_t i_2 = 0; i_2 u< 0x40; i_2 += 1)
    if (i_2 u>= ebx)
        eax_9 = 0
    else
        eax_9 = zx.d(var_148[edx_2 + i_2])
    
    eax_9.b ^= 0x5c
    var_148[i_2] = eax_9.b

int32_t ecx_7 = 0
int32_t var_8c = 0
int32_t var_88 = 0
char (* edi_1)[0x40] = &var_148
int32_t var_84 = 0
int32_t i_3 = 0x40
int32_t var_a0
__builtin_memcpy(&var_a0, 
    "\x01\x23\x45\x67\x89\xab\xcd\xef\xfe\xdc\xba\x98\x76\x54\x32\x10\xf0\xe1\xd2\xc3", 0x14)
int32_t var_40 = 0
uint32_t var_3c = 0
char var_80[0x40]

do
    i_3 -= 1
    
    if (var_3c != 0)
        break
    
    eax_9.b = *edi_1
    var_80[ecx_7] = eax_9.b
    ecx_7 = var_84 + 1
    int32_t temp2_1 = var_8c
    var_8c += 8
    var_84 = ecx_7
    
    if (temp2_1 == 0xfffffff8)
        int32_t temp3_1 = var_88
        var_88 += 1
        eax_9 = var_3c
        
        if (temp3_1 == 0xffffffff)
            eax_9 = 1
        
        var_3c = eax_9
    
    if (ecx_7 == 0x40)
        sub_6bf7a0(&var_a0)
        ecx_7 = var_84
    
    edi_1 = &(*edi_1)[1]
while (i_3 != 0)

char* edi_2 = &var_34
int32_t i_4 = 0x14

if (var_40 != 0)
    int32_t var_3c_1 = 3
else if (var_3c == 0)
    do
        i_4 -= 1
        
        if (var_3c != 0)
            break
        
        eax_9.b = *edi_2
        var_80[ecx_7] = eax_9.b
        ecx_7 = var_84 + 1
        int32_t temp4_1 = var_8c
        var_8c += 8
        var_84 = ecx_7
        
        if (temp4_1 == 0xfffffff8)
            int32_t temp5_1 = var_88
            var_88 += 1
            eax_9 = var_3c
            
            if (temp5_1 == 0xffffffff)
                eax_9 = 1
            
            var_3c = eax_9
        
        if (ecx_7 == 0x40)
            sub_6bf7a0(&var_a0)
            ecx_7 = var_84
        
        edi_2 = &edi_2[1]
    while (i_4 != 0)

int32_t result = sub_6bf6a0(&var_a0, arg6)
sub_745f2b(eax_1 ^ &__saved_ebp)
return result
