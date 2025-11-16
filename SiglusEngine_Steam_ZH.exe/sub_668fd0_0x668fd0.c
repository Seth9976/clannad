// 函数: sub_668fd0
// 地址: 0x668fd0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9bb708
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void* var_14 = arg1
int32_t __saved_ebp
int32_t var_20 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_14_1 = 0
int32_t var_8_1 = 0
void* edx = data_b900c4
uint32_t result_1 = *edx

if (result_1 == 0)
    result_1 = *(edx + 4)
    
    if (result_1 == 0)
        result_1 = *(edx + 8)
        
        if (result_1 == 0)
            result_1 = *(edx + 0xc)
            
            if (result_1 == 0)
                data_4ecd1c0 = *(arg1 + 4)
                int128_t xmm0_2 = *(arg1 + 0x14)
                data_b900c4 = &data_4ecd1c0
                data_b900c0 = &data_4ecd1d0
                data_4ecd1d0 = xmm0_2
                data_b900c8 = *(arg1 + 0x24)
                result_1 = zx.d(*(arg1 + 0x26))
                data_b900ca = result_1.w

int32_t* esi = data_b900cc
uint32_t result = 0

if (esi == 0)
    result_1 = std::money_get<char,class std::istreambuf_iterator<char,struct std::char_traits<char> > >::_Getmfld(
        &data_b900c0, arg3)
    esi = data_b900cc
    result = result_1

int32_t* var_14_2 = esi

if (esi != 0)
    result_1 = (*(*esi + 4))(esi)
label_6690aa:
    
    if (esi != 0)
        result = sub_663c80(result_1, arg2, esi, arg4)
    else
        result = 0x80070057
else if (result s>= 0)
    goto label_6690aa

int32_t var_8_2 = 0xffffffff

if (esi != 0)
    (*(*esi + 8))(esi)

fsbase->NtTib.ExceptionList = ExceptionList
return result
