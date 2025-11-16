// 函数: sub_664aa0
// 地址: 0x664aa0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_14 = 0xffffffff
int32_t (* var_18)(void* arg1) = sub_9c560b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_a8
int32_t eax_2 = __security_cookie ^ &var_a8
int32_t __saved_edi
int32_t var_b4 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
HWND hWndParent = arg1

if (arg2 == 2)
    LRESULT ecx_10 = data_4ebe2f4
    
    if (ecx_10 != 0)
        data_4ebe2f4 = 0
        (*(*ecx_10 + 8))(ecx_10)
else if (arg2 == 0x10)
    EndDialog(arg1, 0)
else if (arg2 == 0x110)
    data_bac4f8 = arg1
    RECT rect
    GetClientRect(arg1, &rect)
    int32_t nWidth = rect.right - rect.left
    int32_t nHeight = rect.bottom - rect.top
    sub_5c97d0()
    int32_t var_64_1 = 0
    int32_t var_60_1 = 0
    int32_t nWidth_1 = nWidth
    int32_t nHeight_1 = nHeight
    int32_t var_14_1 = 0
    LRESULT eax_10 =
        SendMessageW(CreateWindowExW(WS_EX_CLIENTEDGE, AtlAxWin120", Shell.Explorer.2", 0x56000000, 
        0, 0, nWidth, nHeight, hWndParent, nullptr, data_b95abc, nullptr), data_bac3dc, 0, 0)
    LRESULT var_8c_1 = eax_10
    int32_t eax_11 = 0x80004005
    
    if (eax_10 != 0)
        eax_11 = 0
    
    if (eax_11 == 0)
        sub_668df0(eax_10)
        
        if (data_4ebe2f4 != 0)
            int32_t var_b8_3 = sub_669d00(&hWndParent)
            
            if (eax_10 != 0)
                (*(*eax_10 + 4))(eax_10)
            
            if (sub_6646a0(hWndParent, eax_10) s>= 0)
                VARIANT pvarg
                __builtin_memset(&pvarg, 0, 0x10)
                VariantInit(&pvarg)
                var_14_1.b = 1
                void var_3c
                int16_t* eax_14 = sub_6b2b60(&var_3c)
                var_14_1.b = 2
                void var_54
                int16_t* eax_15 =
                    sub_548cb0(eax_14, https://api.twitter.com/oauth/authenticate?oauth_token=", 
                    &var_54, eax_14)
                var_14_1.b = 3
                
                if (*(eax_15 + 0x14) u>= 8)
                    eax_15 = *eax_15
                
                int16_t pvarg_1 = 0
                sub_5c4b50(&pvarg_1, eax_15)
                sub_52e8a0(&var_54)
                var_14_1.b = 6
                sub_52e8a0(&var_3c)
                int32_t* eax_16 = data_4ebe2f4
                (*(*eax_16 + 0xd0))(eax_16, &pvarg_1, &pvarg, &pvarg, &pvarg, &pvarg)
                VariantClear(&pvarg_1)
                VariantClear(&pvarg)
    
    int32_t var_14_2 = 0xffffffff
    
    if (eax_10 != 0)
        (*(*eax_10 + 8))(eax_10)

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &var_a8)
return 0
