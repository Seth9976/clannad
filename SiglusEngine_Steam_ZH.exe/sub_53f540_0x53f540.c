// 函数: sub_53f540
// 地址: 0x53f540
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_9b0b18
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_3c
int32_t eax_2 = __security_cookie ^ &var_3c
int32_t __saved_esi
int32_t var_44 = __security_cookie ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
uint32_t result

if (zx.d(arg2.w) - 0x3f8 u> 0xe0)
    result.b = 0
else
    switch (arg2.w)
        case 0x3f8
            *(data_bac4e4 + 0x60) = 0
            sub_541660(arg1)
            result.b = 1
        case 0x3f9
            *(data_bac4e4 + 0x64) = 0
            sub_541660(arg1)
            result.b = 1
        case 0x3fa
            void* eax_13 = data_bac4e4
            bool cond:1_1 = *(eax_13 + 0x5c) == 0
            *(eax_13 + 0x54) = 0x64
            
            if (not(cond:1_1))
                *(eax_13 + 0x58) = 0x64
                goto label_53f782
            
            sub_541660(arg1)
            result.b = 1
        case 0x3fb
            void* eax_11 = data_bac4e4
            bool cond:0_1 = *(eax_11 + 0x5c) == 0
            *(eax_11 + 0x58) = 0x64
            
            if (cond:0_1)
                sub_541660(arg1)
                result.b = 1
            else
                *(eax_11 + 0x54) = 0x64
            label_53f782:
                sub_6c3900(arg1 + 0x12b4, 0x64)
                sub_6c3900(arg1 + 0x1074, *(data_bac4e4 + 0x58))
                sub_541660(arg1)
                result.b = 1
        case 0x3fc
            sub_53fd90(arg1)
            result.b = 1
        case 0x3fd
            void* eax_6 = data_bac510
            int32_t ecx_3 = *(eax_6 + 0x80)
            int32_t eax_7 = *(eax_6 + 0x7c)
            int32_t var_48_1 = ecx_3
            int32_t var_4c_1 = eax_7
            int32_t var_50_1 = ecx_3
            int32_t var_54_1 = eax_7
            void var_6c
            sub_52e820(&var_6c, ",g\O")
            int32_t var_c_1 = 0
            void var_34
            sub_60e1c0(sub_6ae4c0(&var_34, var_6c))
            sub_52e8a0(&var_34)
            result.b = 1
        case 0x3fe, 0x48e
            sub_616180()
            result.b = 1
        case 0x3ff, 0x400, 0x401, 0x402, 0x403, 0x404, 0x405, 0x406, 0x407, 0x408, 0x409, 0x40a, 
                0x40b, 0x40d, 0x40e, 0x40f, 0x410, 0x411, 0x412, 0x413, 0x414, 0x415, 0x416, 0x418, 
                0x419, 0x41a, 0x41b, 0x41c, 0x41d, 0x41e, 0x41f, 0x420, 0x421, 0x422, 0x423, 0x424, 
                0x425, 0x426, 0x427, 0x428, 0x429, 0x42a, 0x42b, 0x42c, 0x42d, 0x42e, 0x42f, 0x430, 
                0x431, 0x432, 0x433, 0x434, 0x435, 0x436, 0x437, 0x438, 0x439, 0x43a, 0x43b, 0x43c, 
                0x43d, 0x43e, 0x43f, 0x440, 0x441, 0x442, 0x443, 0x444, 0x445, 0x446, 0x447, 0x448, 
                0x449, 0x44a, 0x44b, 0x44c, 0x44d, 0x44e, 0x44f, 0x450, 0x451, 0x452, 0x453, 0x454, 
                0x455, 0x456, 0x457, 0x458, 0x459, 0x45a, 0x45b, 0x45c, 0x45d, 0x45e, 0x45f, 0x460, 
                0x461, 0x462, 0x463, 0x464, 0x465, 0x466, 0x467, 0x468, 0x469, 0x46a, 0x46b, 0x46c, 
                0x46d, 0x46e, 0x46f, 0x470, 0x471, 0x472, 0x473, 0x474, 0x475, 0x476, 0x477, 0x478, 
                0x479, 0x47a, 0x47b, 0x47c, 0x47d, 0x47e, 0x47f, 0x480, 0x481, 0x482, 0x489, 0x48a, 
                0x48b, 0x48c, 0x48d, 0x490, 0x491, 0x497, 0x498, 0x499, 0x49a, 0x49b, 0x49c, 0x49d, 
                0x49e, 0x49f, 0x4a0, 0x4a1, 0x4a2, 0x4a3, 0x4a4, 0x4a5, 0x4a6, 0x4a7, 0x4a8, 0x4a9, 
                0x4aa, 0x4ab, 0x4ac, 0x4ad, 0x4ae, 0x4af, 0x4b0, 0x4b1, 0x4b2, 0x4b3, 0x4b4, 0x4b5, 
                0x4b6, 0x4b7, 0x4b8, 0x4b9, 0x4ba, 0x4bb, 0x4bc, 0x4bd, 0x4be, 0x4bf, 0x4c0, 0x4c1, 
                0x4c2, 0x4c3, 0x4c4, 0x4c5, 0x4c6, 0x4c7, 0x4c8, 0x4c9, 0x4ca, 0x4cb, 0x4cc, 0x4cd, 
                0x4ce, 0x4cf, 0x4d0, 0x4d1, 0x4d2, 0x4d3, 0x4d4, 0x4d5
            result.b = 0
        case 0x40c
            sub_6bfea0(*(arg1 + 4))
            result.b = 1
        case 0x417
            *(data_bac4e4 + 0x5c) = sub_6c3160(arg1 + 0x1344).b
            result.b = 1
        case 0x483
            *(data_bac4e4 + 0x50) = 5
            result.b = 1
        case 0x484
            *(data_bac4e4 + 0x50) = 1
            result.b = 1
        case 0x485
            *(data_bac4e4 + 0x50) = 4
            result.b = 1
        case 0x486
            *(data_bac4e4 + 0x50) = 0
            result.b = 1
        case 0x487
            *(data_bac4e4 + 0x50) = 3
            result.b = 1
        case 0x488
            *(data_bac4e4 + 0x50) = 2
            result.b = 1
        case 0x48f
            sub_616090()
            result.b = 1
        case 0x492
            sub_616120(0x32, 0x32)
            result.b = 1
        case 0x493
            sub_616120(0x4b, 0x4b)
            result.b = 1
        case 0x494
            sub_616120(0x64, 0x64)
            result.b = 1
        case 0x495
            sub_616120(0x96, 0x96)
            result.b = 1
        case 0x496
            sub_616120(0xc8, 0xc8)
            result.b = 1
        case 0x4d6
            *(data_bac4a0 + 0x68) = sub_6c3160(arg1 + 0x5bc).b
            result.b = 1
        case 0x4d7
            uint16_t ecx_10 = (arg2 u>> 0x10).w
            
            if (ecx_10 == 9)
                sub_53ff80(sub_6c3410(arg1 + 0x920))
                sub_541000(arg1)
                result.b = 1
            else if (ecx_10 == 0xa)
                sub_541000(arg1)
                result.b = 1
            else if (ecx_10 != 7)
                result.b = 1
            else
                sub_5411f0(arg1)
                result.b = 1
        case 0x4d8
            if (arg2 u>> 0x10 != 9)
                result.b = 1
            else
                sub_53fef0(sub_6c3410(arg1 + 0x88c))
                sub_541000(arg1)
                result.b = 1

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &var_3c)
return result
