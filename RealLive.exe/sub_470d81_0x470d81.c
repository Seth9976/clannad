// 函数: sub_470d81
// 地址: 0x470d81
// 来自: F:\SETUPDATA\GAMEDATA\RealLive.exe

int32_t eax
eax.b = *0x6a00d495
int32_t var_4 = eax
int32_t ecx
int32_t var_8 = ecx
void* entry_ebx
void* var_10 = entry_ebx
int32_t* var_14 = &var_10
int32_t var_18 = arg1
int32_t var_1c = arg2
int32_t edi
int32_t var_20 = edi
int32_t* esp = &var_20

while (true)
    arg1 -= 1
    *(esp - 4) = entry_ebx
    *(arg2 + (eax << 1) + 0x72)
    ecx:1.b = 0xa0
    *(esp - 8) = 0x35
    esp -= 8
    eax = adc.d(eax, 0xecbca210, false)
    bool cond:0_1 = *(eax + 0x6e) == 0xa5af39ec
    int32_t eflags_1
    char temp0_1
    char temp1_2
    temp0_1, temp1_2, eflags_1 = __aad_immb(0x9d, eax.b, eax:1.b)
    eax.b = temp0_1
    eax:1.b = temp1_2
    eax.b = __in_al_immb(0x54, eflags_1)
    __out_dx_al(0x39ec, eax.b, eflags_1)
    
    if (not(cond:0_1) && ecx == 1)
        break
    
    *0xa5af3a4c += (ecx - 1):1.b

*(entry_ebx - 0x3b)
*(entry_ebx - 0x3b) = 0xec | (eax.b ^ 0xff)
undefined
