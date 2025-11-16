// 函数: sub_495c38
// 地址: 0x495c38
// 来自: F:\SETUPDATA\GAMEDATA\RealLive.exe

bool p = unimplemented  {or al, 0x74}
int32_t eflags

if (p)
    *(arg2 + 0x5596330b) u>>= 1
    *(arg4 + 0x3a)
    *(arg1 + 1) &= 0x6a
    int32_t eflags_1
    char temp0_1
    char temp1_1
    temp0_1, temp1_1, eflags_1 = __aas(arg5.b, arg5:1.b, eflags)
    int16_t eax
    eax.b = temp0_1
    eax:1.b = temp1_1
    *arg6
    *0xd4ae01a = arg12
    *(arg10 - 0x132f9f95) &= 0x53
    *__return_addr
    *(__return_addr + 0x454797db)
    undefined

*0xaf6e659b = rlc.b(*0xaf6e659b, 0x3b, false)
void* const __return_addr_1 = __return_addr
int32_t result
int32_t edx_2
edx_2:result = sx.q(arg12)
void arg_20
arg12 = &arg_20
void* const __return_addr_2
int32_t entry_ebx
void** esp_1

if ((entry_ebx & arg1) == 0 || __return_addr_2 != 1)
    if (__return_addr_2 != 2)
        int32_t eflags_2
        char temp0_4
        char temp1_2
        temp0_4, temp1_2, eflags_2 = __aam_immb(0xe8, result.b)
        result.b = temp0_4
        result:1.b = temp1_2
        __return_addr_2 = __return_addr_1
        *__return_addr_1 = result
        undefined
    
    *(__return_addr_2 - 0x76) += edx_2:1.b
    *__return_addr_1 = *arg8
    __return_addr_1 += 4
    __return_addr_2 = arg10
    void arg_f0
    void** eax_3
    eax_3.b = &arg_f0
    eax_3.b = __in_al_dx(edx_2.w, eflags)
    _bswap(arg9 + 1)
    int16_t ds
    *(result - 4) = zx.d(ds)
    esp_1 = result - 4
    void* ecx_2
    ecx_2:1.b = 0xce
    edx_2 = 0xd4640404
    result = __in_oeax_dx(0x404, eflags)
else
    void* __return_addr_3 = __return_addr_2
    bool cond:1_1 = __return_addr_2 == 0
    __return_addr_2 = arg10
    esp_1 = &__return_addr_2
    
    if (not(cond:1_1) && __return_addr_3 == 1)
        return result

*(esp_1 - 4) = edx_2
*__return_addr_1 = result
undefined
