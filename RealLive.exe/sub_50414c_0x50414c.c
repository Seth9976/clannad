// 函数: sub_50414c
// 地址: 0x50414c
// 来自: F:\SETUPDATA\GAMEDATA\RealLive.exe

int16_t ds = __return_addr.w
*(arg1 - 0x30)
int32_t eflags
arg1.b = __in_al_dx(arg2, eflags)
*arg4 = &__return_addr:2
void* edi = arg4 + 1
char var_7a = arg3:1.b + 1
*0xe9be95c6 = zx.d(ds)
arg3:1.b = 0x23
int32_t esp_1 = *0xe9be95c6
*edi = *0xdde90000
void* eax
eax.b = &__return_addr:2 ^ 0xce
*(edi + 1) = *0xdde90001
*(esp_1 + (eax << 2) - 0x27) = arg2
eax.b = 0x82
eax.b = 0xa7
int32_t eflags_1
uint16_t temp0_2
temp0_2, eflags_1 = __arpl_gpr16_gpr16(eax.w, arg2)
eax.w = temp0_2
eax.b = __in_al_dx(arg2, eflags_1)
*(esp_1 - 4) = arg3 + arg1
breakpoint
