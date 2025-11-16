// 函数: sub_4a428e
// 地址: 0x4a428e
// 来自: F:\SETUPDATA\GAMEDATA\RealLive.exe

int32_t gsbase
void* esp_1 = &__return_addr + *(gsbase + arg1 + 0x53)
void* entry_ebx
char temp1 = *(entry_ebx - 0x10)
*(entry_ebx - 0x10) -= entry_ebx.b
bool c = temp1 u< entry_ebx.b
char temp2 = *(entry_ebx - 0x22476ff6)
*(entry_ebx - 0x22476ff6) = adc.b(temp2, arg3.b, c)
bool c_1 = adc.b(temp2, arg3.b, c) u< temp2 || (c && adc.b(temp2, arg3.b, c) == temp2)
bool o = unimplemented  {adc byte [ebx-0x22476ff6], al}

if (arg1 != 0)
    if (adc.b(temp2, arg3.b, c) s< 0 == o)
        if (adc.b(temp2, arg3.b, c) == 0)
            jump(0x4a42c6)
        
        *esp_1
        undefined
    
    if (o)
        jump(sub_4a4247+0x5e)
    
    jump(sub_4a4247+0x5b)

int32_t temp4 = *(arg4 + 0x2240d7d2)
int32_t result = adc.d(arg3, temp4, c_1)

if (adc.d(arg3, temp4, c_1) != 0 && adc.d(arg3, temp4, c_1) u>= arg3
        && (not(c_1) || adc.d(arg3, temp4, c_1) != arg3))
    return result

bool c_4 = *arg5 u< *arg6
void* esi_1 = &arg5[1]
void* edi_3 = &arg6[1]
int32_t temp8 = *(arg4 + 0x2240d7d2)

if (adc.d(result, temp8, c_4) != 0 && adc.d(result, temp8, c_4) u>= result
        && (not(c_4) || adc.d(result, temp8, c_4) != result))
    return adc.d(result, temp8, c_4)

int32_t* eax_2
eax_2.b = *0x4d74dcf
*(edi_3 - 0x3d634ae2)
*(esp_1 - 4) = esi_1
bool c_2 = *esi_1 u< *eax_2
int32_t temp12 = *(arg4 + 0x2240d7d2)

if (adc.d(edi_3, temp12, c_2) == 0 || adc.d(edi_3, temp12, c_2) u< edi_3
        || (c_2 && adc.d(edi_3, temp12, c_2) == edi_3))
    jump(sub_4a41db-0x9d)

jump(sub_4a41db-0x39)
