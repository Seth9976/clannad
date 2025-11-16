// 函数: sub_434c10
// 地址: 0x434c10
// 来自: F:\SETUPDATA\GAMEDATA\RealLive.exe

int32_t var_4 = arg1 - 1
int32_t var_8 = arg3
int32_t var_c = arg2
void* entry_ebx
void* var_10 = entry_ebx
int32_t* var_14 = &var_10
void* var_18 = arg4
int32_t var_1c = arg5
int32_t* var_20 = arg6
int32_t eflags
int32_t eax
eax.b = __in_al_dx(arg2.w, eflags)
eax.b = adc.b(eax.b, 0x24, eax u< *arg6)
*(arg4 + 0xd) += arg3.b
arg2:1.b = 0x89
void* ecx = entry_ebx
uint8_t* edi_2
uint8_t temp0_1
temp0_1, edi_2 = __insb(&arg6[1] + 1, arg2.w, eflags)
*edi_2 = temp0_1
void* var_24_1 = entry_ebx
void* eax_1 = eax + 0x5e451ab9
bool c_2 = eax u< 0xa1bae547
void* var_28 = entry_ebx
void** esp = &var_28
int32_t esi_1
int16_t ds
esi_1, ds = __lds_gprz_memp(*(eax_1 - 0x70))
void** edi_3

while (true)
    edi_3 = sbb.d(edi_2, *(ecx + 0x49be95cb), c_2)
    esp[esi_1 * 2] = arg4
    void* esp_1 = *esp
    arg2.b -= *(arg2 + (esi_1 << 2) - 0x3b1289d9)
    *(esp_1 - 4) = zx.d(ds)
    c_2 = eax_1 u< 0x600000c6
    esp = esp_1
    ecx = *(esp_1 - 4) - 1
    
    if (eax_1 != 0x600000c6 && ecx == 0)
        break
    
    edi_2 = edi_3 + 1
    __in_oeax_immb(0xba, eflags)
    eax_1 = *0x9070c553

arg2:1.b = 0x4d
void* ebx = *esp
*edi_3 = arg4
*(esp + 1) = ebx
__in_oeax_dx(arg2.w, eflags)
edi_3[1].b = *0xead00d89
*(esp - 3) = zx.d(ds)
ecx:1.b = 0xca

if (ecx == 1)
    if (adc.d(eax_1 - 0x600000c6, 0x89d84dc7, false) s>= 0)
        jump(0x434ccd)
    
    jump(0x434c6d)

*(esp - 7) = ebx
char* es
*(es + ecx - 1)
*(es + ecx - 1) u>>= (ecx - 1).b
bool c_3 = unimplemented  {shr byte [es:ecx], cl}

if (ecx == 2)
    *(esp - 0xb) = esp - 7
    *(esp - 0xf) = ebx
    es[0xd54f0e2] s>>= (ecx - 2).b
    undefined

*(esp - 0xb) = zx.d(ds)

if (c_3)
    jump(0x434c6d)

jump(0x434c9e)
