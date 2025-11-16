// 函数: sub_4de7b0
// 地址: 0x4de7b0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_6056a8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_3c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
sub_4dea40(0)

if (data_7027ac == 0)
    sub_4de510()
    data_7027ac = 1

int32_t var_18 = arg8 + 1
int32_t var_1c = arg7 + 1
int32_t var_24 = arg5
int32_t var_20 = arg6
HWND hWnd = CreateWindowExA(WS_EX_LEFT, "AtlAxWin120", nullptr, 0x42000000, arg5, arg6, 
    arg7 + 1 - arg5, arg8 + 1 - arg6, arg3, nullptr, data_641a68, nullptr)
data_1cd4504 = hWnd
int32_t result

if (hWnd == 0)
    sub_4dea40(0)
    result = 0
else
    BOOL bEnable
    
    if (data_7027b4 != 0)
        bEnable = 1
    else
        bEnable = 0
    
    int32_t* var_40_1 = &data_1cd4510
    int32_t edi_1 =
        std::_System_error_category::default_error_condition(EnableWindow(hWnd, bEnable))
    
    if (edi_1 s< 0)
    label_4dea08:
        
        if (edi_1 != 0x3e7)
            sub_4dea40(0)
            result = 0
        else
            result = 1
    else
        int32_t* edi_2 = data_1cd4510
        BSTR bstrString = sub_4d92c0("{6BF52A52-394A-11d3-B153-00C04F79FAA6}")
        BSTR bstrString_1 = bstrString
        
        if (bstrString == 0)
            sub_4d9320(0x8007000e)
            noreturn
        
        int32_t var_8_1 = 0
        edi_1 = (*(*edi_2 + 0xc))(edi_2, bstrString, data_1cd4504, 0)
        int32_t var_8_2 = 0xffffffff
        LRESULT ecx_4 = SysFreeString(bstrString)
        
        if (edi_1 s< 0)
            goto label_4dea08
        
        int32_t* var_40_3 = &data_1cd4508
        edi_1 = ___dyn_tls_init@12(ecx_4)
        
        if (edi_1 s< 0)
            goto label_4dea08
        
        int32_t* eax_11 = data_1cd4508
        edi_1 = (**eax_11)(eax_11, 0x61cf9c, &data_1cd450c)
        
        if (edi_1 s< 0)
            goto label_4dea08
        
        int32_t* esi_2 = data_1cd450c
        edi_1 = (*(*esi_2 + 0x88))(esi_2, sub_4d92c0("none"))
        
        if (edi_1 s< 0)
            goto label_4dea08
        
        int32_t* eax_15 = data_1cd450c
        edi_1 = (*(*eax_15 + 0x84))(eax_15, 0)
        
        if (edi_1 s< 0)
            goto label_4dea08
        
        int32_t* eax_17 = data_1cd450c
        edi_1 = (*(*eax_17 + 0x74))(eax_17, 0)
        
        if (edi_1 s< 0)
            goto label_4dea08
        
        int32_t* eax_19 = data_1cd450c
        edi_1 = (*(*eax_19 + 0x94))(eax_19, 1)
        
        if (edi_1 s< 0)
            goto label_4dea08
        
        int32_t* eax_21 = data_1cd450c
        edi_1 = (*(*eax_21 + 0x30))(eax_21, &data_1cd4514)
        
        if (edi_1 s< 0)
            goto label_4dea08
        
        int32_t* eax_23 = data_1cd450c
        edi_1 = (*(*eax_23 + 0x34))(eax_23, &data_1cd4518)
        
        if (edi_1 s< 0)
            goto label_4dea08
        
        int32_t* eax_25 = data_1cd4518
        edi_1 = (*(*eax_25 + 0x64))(eax_25, data_63ec84)
        
        if (edi_1 s< 0)
            goto label_4dea08
        
        int32_t* esi_3 = data_1cd450c
        edi_1 = (*(*esi_3 + 0x24))(esi_3, sub_4d92c0(arg4))
        
        if (edi_1 s< 0)
            goto label_4dea08
        
        ShowWindow(data_1cd4504, SW_SHOW)
        data_63ec7c = arg8
        data_63eaf4 = arg8
        result = 1
        data_7027b0 = 1
        data_63ec80 = arg5
        data_63ec78 = arg5

fsbase->NtTib.ExceptionList = ExceptionList
sub_5f02dd(eax_2 ^ &__saved_ebp)
return result
