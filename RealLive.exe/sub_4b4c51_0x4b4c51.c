// 函数: sub_4b4c51
// 地址: 0x4b4c51
// 来自: F:\SETUPDATA\GAMEDATA\RealLive.exe

void* eax_2
int32_t edx
int32_t edx_1
int32_t entry_ebx
int32_t ebx
void* ebp_1
void* ebp_3
uint32_t esi_1
int32_t* edi_1
void* edi_2
void* edi_3

while (true)
    arg2.b -= 1
    edi_1 = 0xd5640302
    edx = arg2 + 1
    esi_1 = 0x81df4bde
    ebp_1 = arg3
    eax_2 = arg3
label_4b4c63:
    ebx = entry_ebx << 4 | entry_ebx u>> 0xffffffe4
    edi_2 = edi_1 - 4
    *arg1 = adc.d(*arg1, edx, eax_2 u< *edi_1)
    bool o_1 = unimplemented  {adc dword [ecx], edx}
    int32_t result
    uint32_t var_4_2
    
    if (not(o_1))
        var_4_2 = esi_1
        edx.b -= 1
        arg4 f- arg6
        result = ebx - 1
        *(eax_2 - 0x5dac5866) += edx:1.b
        *esi_1
        *(result - 0x8e130e1)
        bool c_6 = unimplemented  {sbb esi, 0x2b4b78be}
        *(ebp_1 + 0x18) = rrc.b(*(ebp_1 + 0x18), 1, c_6)
    else
        edx_1 = edx + 1
        ebp_3 = eax_2
        eax_2 = ebp_1 + 1
    label_4b4c75:
        result = ebx << 4 | ebx u>> 0xffffffe4
        bool c_2 = eax_2 u< *edi_2
        edi_2 -= 4
        *arg1 = adc.d(*arg1, edx_1, c_2)
        bool o_2 = unimplemented  {adc dword [ecx], edx}
        
        if (not(o_2))
            int16_t ds
            var_4_2 = zx.d(ds)
            *(arg1 + 0x4b78bede)
        else
            arg2 = edx_1 + 1
            arg3 = eax_2
            entry_ebx = result << 4 | result u>> 0xffffffe4
            edi_3 = edi_2 - 4
            *arg1 = adc.d(*arg1, arg2, ebp_3 + 1 u< *edi_2)
            bool o_3 = unimplemented  {adc dword [ecx], edx}
            
            if (o_3)
                break
            
            continue
    int32_t eflags
    eax_2.b = __in_al_immb(0xcf, eflags)
    *edi_2
    return result

edx = arg2 + 1
esi_1 = 0x98c95cde
ebp_1 = ebp_3 + 1
eax_2 = arg3 + 1
entry_ebx = entry_ebx << 4 | entry_ebx u>> 0xffffffe4
edi_1 = edi_3 - 4
*arg1 = adc.d(*arg1, edx, eax_2 u< *edi_3)
bool o_4 = unimplemented  {adc dword [ecx], edx}

if (not(o_4))
    goto label_4b4c63

edx_1 = edx + 1
ebp_3 = eax_2
eax_2 = ebp_1 + 1
ebx = entry_ebx << 4 | entry_ebx u>> 0xffffffe4
edi_2 = edi_1 - 4
*arg1 = adc.d(*arg1, edx_1, eax_2 u< *edi_1)
bool o_5 = unimplemented  {adc dword [ecx], edx}

if (not(o_5))
    goto label_4b4c75

*edi_2
return (ebp_3 + 1) | 0x7cc06f0e
