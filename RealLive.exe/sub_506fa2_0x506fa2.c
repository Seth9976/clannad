// 函数: sub_506fa2
// 地址: 0x506fa2
// 来自: F:\SETUPDATA\GAMEDATA\RealLive.exe

double* edi_3 = arg4 * 0xffffff8c
bool c_1 = unimplemented  {imul edi, esi, 0xffffff8c}
bool o = unimplemented  {imul edi, esi, 0xffffff8c}
int32_t var_4 = arg2
int32_t* esp = &var_4
*0xb3ec9338 = arg1.b
int32_t eax = sx.d(arg1)
long double x87_r0 = arg5 * arg6
bool c_2
bool z

if (not(z))
    bool p
    bool a
    bool s
    bool d
    int32_t var_8_1 = (o ? 1 : 0) << 0xb | (d ? 1 : 0) << 0xa | (s ? 1 : 0) << 7 | (z ? 1 : 0) << 6
        | (a ? 1 : 0) << 4 | (p ? 1 : 0) << 2 | (c_1 ? 1 : 0)
    int16_t ds
    uint32_t var_c = zx.d(ds)
    eax = *0x22bec59e
    uint32_t* var_10 = &var_c
    esp = &var_10
    eax.b ^= arg2.b
    c_2 = false
else
    void* entry_ebx
    int32_t ebp_1
    int16_t ds_1
    ebp_1, ds_1 = __lds_gprz_memp(*(entry_ebx - 2))
    
    if (eax u>= *edi_3)
        *(entry_ebx + 0x2698b3ec)
        eax.w = mulu.dp.b(eax.b, entry_ebx:1.b)
        *0x98c842c1 = eax.b
        *(entry_ebx + 0x2698b3ec)
        bool c = unimplemented  {imul edi, esi, 0xffffffaf}
        
        if (c)
            undefined
        
        jump(0x506fef)
    
    x87_r0 = x87_r0 * fconvert.t(*(edi_3 - 0x5ee12bfc))
    c_2 = test_bit(eax:1.b, 0)
    int16_t ds_2
    edi_3, ds_2 = __lds_gprz_memp(*(arg4 - 0x2fcfabde))

if (not(c_2))
    eax.b ^= arg2.b
    *esp
    undefined

*(eax + (arg3 << 3) + 0x4a) = fconvert.s(x87_r0 + fconvert.t(*edi_3))
int32_t eflags
__in_oeax_immb(0xca, eflags)
undefined
