// 函数: sub_495286
// 地址: 0x495286
// 来自: F:\SETUPDATA\GAMEDATA\RealLive.exe

int32_t eax
eax.b = *arg3
void* esi = &arg3[1]
int32_t var_4 = eax
int32_t eflags
int32_t eflags_1
char temp0
temp0, eflags_1 = __daa(eax.b, eflags)
eax.b = temp0
uint32_t dr6 = __mov_dr_dr_gpr32(esi)
*arg4 = eax
void* edi = &arg4[1]
arg5 f- float.t(*(edi - 0x416b358f))
char entry_ebx
char temp1 = entry_ebx
entry_ebx += eax.b
*(arg2 + 0x2750ac42) = eax.b

if (temp1 + eax.b s< 0 != add_overflow(temp1, eax.b))
    if (temp1 == neg.b(eax.b) || temp1 + eax.b u< temp1)
        undefined
    
    jump(0x4952a0)

void* esi_1 = esi & *(esi - 0x55)
arg6 f- float.t(*(edi - 0x416b358f))
bool c_1 = entry_ebx + eax.b u< entry_ebx
bool z_1 = entry_ebx == neg.b(eax.b)
*edi = (arg1 + 1).b
eax.b = *esi_1
void* esi_2 = esi_1 + 1
int32_t var_4_1 = eax
int32_t eflags_2
char temp0_1
temp0_1, eflags_2 = __daa(eax.b, eflags_1)
eax.b = temp0_1
int32_t ebx
ebx:1.b = 0x22

if (z_1 || c_1)
    jump(0x37d152cf)

arg7 f- float.t(*(edi - 0x416b358f))
char temp3 = ebx.b
ebx.b += eax.b
eax:1.b = sbb.b(eax:1.b, (arg1 + 1):1.b, temp3 + eax.b u< temp3)
int32_t var_4_2 = ebx
*edi
void* edi_1 = edi + 4
eax.b = rol.b(eax.b, 0xe5)
int32_t var_67[0x17]
var_67[eax]
uint16_t edx
edx.b = 0x9a
void* ebx_1 = ebx ^ *(arg1 + 0x6fd06001)
*(var_4_1 - 1 + (esi_2 << 2) - 0x35)
edx.b = eax.b
int32_t ecx
ecx:1.b = 0xca
*esi_2 - *edi_1
uint8_t* edi_3
uint8_t temp0_4
temp0_4, edi_3 = __insb(edi_1 + 1, edx, eflags_2)
*edi_3 = temp0_4
edx.b = *(ebx_1 + 0x53a58870)
void* var_8 = ebx_1
jump(0x4952e1)
