// 函数: sub_4db781
// 地址: 0x4db781
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_48c = edi
int32_t var_490 = 0x70
void var_488
int32_t ecx
int32_t edi_1
edi_1, ecx = __memfill_u32(&var_488, 8, 0x90)
int32_t var_490_1 = 0x18
void var_248
int32_t ecx_2
int32_t edi_2
edi_2, ecx_2 = __memfill_u32(&var_248, 9, var_490)
int32_t var_490_2 = 8
void var_88
int32_t ecx_4
int32_t edi_3
edi_3, ecx_4 = __memfill_u32(&var_88, 7, var_490_1)
void var_28
int32_t ecx_6
int32_t edi_4
edi_4, ecx_6 = __memfill_u32(&var_28, var_490_2, var_490_2)
int32_t var_4a4
__builtin_memcpy(&var_4a4, 
    "\x20\x01\x00\x00\x01\x01\x00\x00\x24\x9d\xb5\x00\x64\x9d\xb5\x00\x08\xaf\xb9\x00\x08\x02\x00\x00", 
    0x18)
void* var_4a8 = &var_488
int32_t var_8 = 9
int32_t var_4a0
int32_t var_49c
int32_t var_498
int32_t var_494
int32_t var_490_4
int32_t result = sub_4dac79(&var_8, var_4a8, var_4a4, var_4a0, var_49c, var_498, var_494, var_490_4)

if (result == 0)
    int32_t var_490_5 = 0x20
    int32_t var_494_1 = 0xb9ae08
    int32_t var_498_1 = 0xb59de0
    int32_t var_49c_1 = 0xb59da4
    int32_t var_4a0_1 = 0
    int32_t ecx_7
    int32_t edi_5
    edi_5, ecx_7 = __memfill_u32(&var_488, 5, 0x1e)
    var_8 = 5
    result =
        sub_4dac79(&var_8, &var_488, 0x1e, var_4a0_1, var_49c_1, var_498_1, var_494_1, var_490_5)
    
    if (result s<= 1)
        return 0

return result
