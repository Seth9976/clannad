// 函数: sub_55d580
// 地址: 0x55d580
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9b14a8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_34 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t ecx

switch (*arg2)
    case 0
        *(data_bac458 + 0x355) = 1
    case 1
        *(data_bac458 + 0x355) = 0
    case 2
        data_bac458[0xd4].b = 1
    case 3
        ecx.b = arg3[1][1].Next != 0
        *(data_bac458 + 0x37e) = ecx.b
    case 4
        ecx.b = arg3[1][1].Next != 0
        *(data_bac458 + 0x37d) = ecx.b
    case 5
        data_bac458[0xd4].b = 0
    case 6
        *(data_bac458 + 0x351) = 1
    case 7
        *(data_bac458 + 0x351) = 0
    case 8
        ecx.b = arg3[1][1].Next != 0
        *(data_bac458 + 0x37f) = ecx.b
    case 9
        int32_t ecx_24
        ecx_24.b = *(data_bac458 + 0x37e) != 0
        sub_677bb0(ecx_24)
    case 0xa
        ecx.b = arg3[1][1].Next != 0
        data_bac458[0x125].b = ecx.b
    case 0xb
        ecx.b = arg3[1][1].Next != 0
        *(data_bac458 + 0x48e) = ecx.b
    case 0xc
        *(data_bac458 + 0x34e) = 1
    case 0xd
        *(data_bac458 + 0x34e) = 0
    case 0xe
        data_bac458[0xe3].b = 1
    case 0xf
        data_bac458[0xe3].b = 0
    case 0x10
        int32_t ecx_25
        ecx_25.b = *(data_bac458 + 0x37d) != 0
        sub_677bb0(ecx_25)
    case 0x11
        int32_t ecx_26
        ecx_26.b = *(data_bac458 + 0x37f) != 0
        sub_677bb0(ecx_26)
    case 0x12
        int32_t ecx_3
        ecx_3.b = sub_620a70() != 0
        sub_677bb0(ecx_3)
    case 0x13
        *(data_bac458 + 0x38d) = 1
    case 0x14
        *(data_bac458 + 0x38d) = 0
    case 0x15
        *(data_bac458 + 0x375) = 1
    case 0x16
        *(data_bac458 + 0x375) = 0
    case 0x17
        int32_t ecx_29
        ecx_29.b = *(data_bac458 + 0x48e) != 0
        sub_677bb0(ecx_29)
    case 0x18
        int32_t ecx_31
        ecx_31.b = *(data_bac458 + 0x494) != 0
        sub_677bb0(ecx_31)
    case 0x19
        data_bac458[0xdc] = arg3[1][1].Next
    case 0x1a
        sub_677bb0(*(data_bac458 + 0x370))
    case 0x1b
        data_bac458[0xdc] = 0xffffffff
    case 0x1c
        ecx.b = arg3[1][1].Next != 0
        data_bac458[0xdd].b = ecx.b
    case 0x1d
        int32_t ecx_21
        ecx_21.b = *(data_bac458 + 0x374) != 0
        sub_677bb0(ecx_21)
    case 0x1e
        *(data_bac458 + 0x352) = 1
    case 0x1f
        *(data_bac458 + 0x352) = 0
    case 0x20
        *(data_bac458 + 0x34f) = 1
    case 0x21
        *(data_bac458 + 0x34f) = 0
    case 0x22
        data_bac458[0xe0].b = 1
    case 0x23
        data_bac458[0xe0].b = 0
    case 0x24
        *(data_bac458 + 0x491) = 1
    case 0x25
        *(data_bac458 + 0x491) = 0
    case 0x26
        *(data_bac458 + 0x492) = 1
    case 0x27
        *(data_bac458 + 0x492) = 0
    case 0x28
        int32_t ecx_22 = arg3[1][2]
        
        if (ecx_22 s>= 0 && ecx_22 s< 0x100)
            *(ecx_22 + data_bac458 + 0x38e) = 1
    case 0x29
        int32_t ecx_23 = arg3[1][2]
        
        if (ecx_23 s>= 0 && ecx_23 s< 0x100)
            *(ecx_23 + data_bac458 + 0x38e) = 0
    case 0x2a
        ecx.b = arg3[1][1].Next != 0
        *(data_bac458 + 0x379) = ecx.b
    case 0x2b
        int32_t ecx_27
        ecx_27.b = *(data_bac458 + 0x379) != 0
        sub_677bb0(ecx_27)
    case 0x2c
        ecx.b = arg3[1][1].Next != 0
        *(data_bac458 + 0x37a) = ecx.b
    case 0x2d
        int32_t ecx_28
        ecx_28.b = *(data_bac458 + 0x37a) != 0
        sub_677bb0(ecx_28)
    case 0x2e
        *(data_bac458 + 0x34d) = 1
    case 0x2f
        *(data_bac458 + 0x34d) = 0
    case 0x30
        data_bac458[0xde].b = 1
    case 0x31
        *(data_bac458 + 0x493) = 1
    case 0x32
        *(data_bac458 + 0x493) = 0
    case 0x33
        *(data_bac458 + 0x375) = 0x101
    case 0x34
        data_bac458[0xd2] = arg3[1][1].Next
    case 0x35
        sub_677bb0(*(data_bac458 + 0x348))
    case 0x36
        *(data_bac458 + 0x353) = 1
    case 0x37
        *(data_bac458 + 0x353) = 0
    case 0x38
        *(data_bac458 + 0x381) = 1
    case 0x39
        *(data_bac458 + 0x381) = 0
    case 0x3c
        data_bac458[0xd6] = arg3[1][1].Next
    case 0x3d
        data_bac458[0xd7] = arg3[1][1].Next
    case 0x3e
        data_bac458[0xd6] = 0xffffffff
    case 0x3f
        data_bac458[0xd7] = 0xffffffff
    case 0x40
        sub_677bb0(*(data_bac458 + 0x358))
    case 0x41
        sub_677bb0(*(data_bac458 + 0x35c))
    case 0x42
        ecx.b = arg3[1][1].Next != 0
        *(data_bac458 + 0x495) = ecx.b
    case 0x43
        int32_t ecx_35
        ecx_35.b = *(data_bac458 + 0x495) != 0
        sub_677bb0(ecx_35)
    case 0x44
        ecx.b = arg3[1][1].Next != 0
        *(data_bac458 + 0x496) = ecx.b
    case 0x45
        ecx.b = arg3[1][1].Next != 0
        *(data_bac458 + 0x497) = ecx.b
    case 0x46
        ecx.b = arg3[1][1].Next != 0
        data_bac458[0x126].b = ecx.b
    case 0x47
        int32_t ecx_38
        ecx_38.b = *(data_bac458 + 0x498) != 0
        sub_677bb0(ecx_38)
    case 0x48
        int32_t ecx_37
        ecx_37.b = *(data_bac458 + 0x497) != 0
        sub_677bb0(ecx_37)
    case 0x49
        int32_t ecx_36
        ecx_36.b = *(data_bac458 + 0x496) != 0
        sub_677bb0(ecx_36)
    case 0x4a
        ecx.b = arg3[1][1].Next != 0
        data_bac458[0xd5].b = ecx.b
    case 0x4b
        int32_t ecx_4
        ecx_4.b = *(data_bac458 + 0x354) != 0
        sub_677bb0(ecx_4)
    case 0x4c
        data_bac458[0xd8] = arg3[1][1].Next
    case 0x4d
        data_bac458[0xd9] = arg3[1][1].Next
    case 0x4e
        sub_677bb0(*(data_bac458 + 0x364))
    case 0x4f
        data_bac458[0xda] = arg3[1][1].Next
    case 0x50
        data_bac458[0xda] = 0xffffffff
    case 0x51
        sub_677bb0(*(data_bac458 + 0x368))
    case 0x52
        data_bac458[0xd9] = 0xffffffff
    case 0x53
        int32_t ecx_1
        ecx_1.b = *(data_bac458 + 0x350) != 0
        sub_677bb0(ecx_1)
    case 0x54
        int32_t ecx_2
        ecx_2.b = *(data_bac458 + 0x351) != 0
        sub_677bb0(ecx_2)
    case 0x55
        ecx.b = arg3[1][1].Next != 0
        data_bac458[0xd4].b = ecx.b
    case 0x56
        ecx.b = arg3[1][1].Next != 0
        *(data_bac458 + 0x351) = ecx.b
    case 0x57
        void** edx_1 = arg3[1] + 0xc
        int32_t* ecx_40 = data_bac458 + 0x320
        
        if (ecx_40 != edx_1)
            sub_52e3c0(ecx_40, edx_1, 0, 0xffffffff)
    case 0x58
        sub_60c680(data_bac49c + 0xc, data_bac458 + 0x320)
    case 0x59
        sub_53a350(data_bac458 + 0x320)
    case 0x5a
        data_bac458[0xe1] = arg3[1][1].Next
    case 0x5b
        data_bac458[0xe1] = 0xffffffff
    case 0x5c
        sub_677bb0(*(data_bac458 + 0x384))
    case 0x5d
        data_bac458[0xe2] = arg3[1][1].Next
    case 0x5e
        data_bac458[0xe2] = 0xffffffff
    case 0x5f
        sub_677bb0(*(data_bac458 + 0x388))
    case 0x60
        ecx.b = arg3[1][1].Next != 0
        *(data_bac458 + 0x48f) = ecx.b
    case 0x61
        int32_t ecx_30
        ecx_30.b = *(data_bac458 + 0x48f) != 0
        sub_677bb0(ecx_30)
    default
        int32_t var_18_1 = 7
        int32_t var_1c_1 = 0
        int16_t var_2c = 0
        sub_52e720(&var_2c, 0xad8dec, 0x18)
        int32_t var_8_1 = 0
        sub_684160(data_bac424, 2, &var_2c)
        
        if (var_18_1 u>= 8)
            j__free(var_2c.d)

struct _EXCEPTION_REGISTRATION_RECORD** result
result.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
