// 函数: sub_4be559
// 地址: 0x4be559
// 来自: F:\SETUPDATA\GAMEDATA\RealLive.exe

bool p = unimplemented  {inc eax}
bool a = unimplemented  {inc eax}
bool z = arg1 == 0xffffffff
bool s = arg1 + 1 s< 0
bool o_1 = add_overflow(arg1, 1)
int32_t* var_10
int32_t var_c
int32_t eflags
void* eax
int32_t ebp
bool c

if (s != o_1)
    if (z || s != o_1)
        return arg1 + 1
    
    eax:1.b =
        (s ? 1 : 0) << 7 | (z ? 1 : 0) << 6 | (a ? 1 : 0) << 4 | (p ? 1 : 0) << 2 | (c ? 1 : 0)
    void* var_4_1 = eax
    void* var_8_1 = arg3
    var_c = arg2
    int32_t* entry_ebx
    var_10 = entry_ebx
    int32_t** var_14_1 = &var_10
    int32_t var_18_1 = ebp
    uint16_t* var_1c_1 = arg4
    int32_t* var_20 = arg5
    *((&var_20 u>> 1) - 4) = entry_ebx
    bool c_1 = eax u< *arg5
    char ecx_1 = eax.b
    int32_t eflags_3
    int32_t eip_1
    eip_1, eflags_3 = __into(eflags)
    void* eax_1
    eax_1.b = sbb.b(arg3.b, 0x91, c_1)
    char temp3_1 = *entry_ebx
    *entry_ebx += ecx_1
    __sti(eflags_3)
    int16_t eax_2
    eax_2:1.b = adc.b((arg5.w + 4):1.b, *(eax_1 + 0x6080f53), temp3_1 + ecx_1 u< temp3_1)
else
    int32_t eflags_1
    char temp0
    char temp1
    temp0, temp1, eflags_1 = __aas((arg1 + 1).b, (arg1 + 1):1.b, eflags)
    eax.b = temp0
    eax:1.b = temp1
    *(eax + 2) = int.q(arg6)
    *(eax - 0x5ed9c9f2) = adc.b(*(eax - 0x5ed9c9f2), eax:1.b, c)
    void* esi = __outsd(arg2.w, *arg4, arg4, eflags_1)
    *__return_addr = eax
    *esi - *(__return_addr + 4)
    char* esi_1 = esi + 1
    void* __return_addr_1
    int32_t edx
    edx:__return_addr_1 = sx.q(eax)
    int32_t edi_3 = arg7
    arg7 = edi_3
    *esi_1
    __out_dx_al(edx.w, __return_addr_1.b, eflags_1)
    int32_t edx_2
    edx_2.b = adc.b(edx.b, 4, false)
    __sti(eflags_1)
    __return_addr = __return_addr_1
    void* var_4 = arg3 + 1
    int32_t var_8 = edx_2
    var_c = 0x2f9ffc03
    var_10 = &var_c
    int32_t var_14 = ebp
    char* var_18 = esi_1
    int32_t var_1c = edi_3
    
    if (add_overflow(0x2f9ffc04, 0xffffffff))
        undefined
unimplemented  {fdiv st0, dword [esi-0x62]}
undefined
