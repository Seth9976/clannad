// 函数: sub_494e01
// 地址: 0x494e01
// 来自: F:\SETUPDATA\GAMEDATA\RealLive.exe

int32_t eflags
void* eax = __in_oeax_dx(arg2.w, eflags)
int32_t ebx = 0x27b27fcb

if (arg1 != 0)
    eax.b = __in_al_dx(arg2.w, eflags)
    *arg4
    int32_t* edi = arg4 + 1
    *edi = *0xbf706068
    void* esi = 0xbf70606c
    edi[1] = *esi
    *(eax - 4) = esi + 4
    *(eax - 4)
    int32_t eax_1
    eax_1.b = 0x9f
    int32_t eflags_1
    char temp0_1
    temp0_1, eflags_1 = __das(0x9f, eflags)
    eax_1.b = temp0_1
    char temp0_2 = *0x27b27f92
    *0x27b27f92 = arg2.b
    arg2.b = temp0_2
    undefined

void* var_4 = eax
*arg4 = *0xbf706068
void* edi_3 = &arg4[1]
void* const esi_2 = 0xbf70606c
eax.b = 0x69
eax.b = 0x59
int32_t eflags_2
char temp0_3
temp0_3, eflags_2 = __daa(0x59, eflags)
eax.b = temp0_3
void* var_8
void* esi_4

if (arg1 == 0)
    var_8 = eax
    *(edi_3 + 1) = *(esi_2 + 1)
    esi_4 = esi_2 + 5
    eax.b = 0x79
else
    eax.b = __in_al_dx(arg2.w, eflags_2)
    long double x87_r0 = arg5 - float.t(*(arg1 - 0x49a96b5b))
    int32_t temp1_1 = *(edi_3 + 1)
    bool p_1 = unimplemented  {scasd dword [edi]}
    bool a_1 = unimplemented  {scasd dword [edi]}
    void* edi_5 = edi_3 + 5
    eax:1.b = (eax - temp1_1 s< 0 ? 1 : 0) << 7 | (eax == temp1_1 ? 1 : 0) << 6 | (a_1 ? 1 : 0) << 4
        | (p_1 ? 1 : 0) << 2 | (eax u< temp1_1 ? 1 : 0)
    int32_t eflags_3
    char temp0_5
    temp0_5, eflags_3 = __das(eax.b, eflags_2)
    eax.b = temp0_5
    char temp0_6 = *0x27b27f92
    *0x27b27f92 = arg2.b
    arg2.b = temp0_6
    *(eax - 0x49) = int.w(x87_r0)
    *(esi_2 + 1 + arg3 - 1 - 0xcab54f) = 0
    eax = __in_oeax_dx(arg2.w, eflags_3)
    ebx = 0x27b26031
    
    if (arg1 != 0)
        eax.b = __in_al_dx(arg2.w, eflags_3)
        *edi_5
        eax.b = *0x925694a5
        int32_t temp3 = *(edi_5 + 1)
        bool p_2 = unimplemented  {scasd dword [edi]}
        bool a_2 = unimplemented  {scasd dword [edi]}
        eax:1.b = (eax - temp3 s< 0 ? 1 : 0) << 7 | (eax == temp3 ? 1 : 0) << 6 | (a_2 ? 1 : 0) << 4
            | (p_2 ? 1 : 0) << 2 | (eax u< temp3 ? 1 : 0)
        int32_t eflags_4
        char temp0_8
        temp0_8, eflags_4 = __das(eax.b, eflags_3)
        eax.b = temp0_8
        char temp0_9 = *0x27b25ff8
        *0x27b25ff8 = arg2.b
        arg2.b = temp0_9
        undefined
    
    var_8 = eax
    *edi_5 = *0xbf756068
    esi_4 = 0xbf75606c

eax.b = 0x69

if (ebx == 0xffffffff || arg1 == 1)
    int32_t edx_1
    int16_t es
    edx_1, es = __les_gprz_memp(*(esi_4 + ((arg1 - 1) << 2)))
    undefined

if (not(test_bit(var_8, 0xb)))
    jump(0x494f88)

jump(0x494f9e)
