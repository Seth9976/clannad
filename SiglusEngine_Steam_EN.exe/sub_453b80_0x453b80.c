// 函数: sub_453b80
// 地址: 0x453b80
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

__chkstk(0x1a4e8)
int32_t __saved_ebp
int32_t result = __security_cookie ^ &__saved_ebp
int32_t result_1 = result

if (data_13711ae != 0)
    WaitForSingleObject(data_7027a8, 0xffffffff)
    int32_t edi_1 = data_1c04c60
    int32_t esi = data_1c04c5c
    ReleaseSemaphore(data_7027a8, 1, nullptr)
    int32_t eax_2
    int32_t edx_1
    edx_1:eax_2 = sx.q(esi)
    int32_t eax_4
    int32_t edx_3
    edx_3:eax_4 = sx.q(edi_1)
    SYSTEMTIME systemTime
    GetLocalTime(&systemTime)
    int32_t eax_8 = data_71929c
    
    if (eax_8 == 0x24)
        sub_420450()
        eax_8 = data_71929c
    
    char ecx_1 = 0
    char var_1a4dd_1 = 0
    
    if (eax_8 == 0x22 || eax_8 == 0x23 || eax_8 == 0x24)
        ecx_1 = 1
        var_1a4dd_1 = 1
    
    char* edi_2 = &data_1357100
    
    if (ecx_1 == 0)
        edi_2 = &data_1333e50
    
    if (*edi_2 == 0)
        void var_cc
        sub_4cfd70(&var_cc, 0x619230)
        ecx_1 = var_1a4dd_1
        edi_2 = &var_cc
    
    void var_1a4cc
    char var_4c
    
    if (ecx_1 == 0)
        int32_t esi_4 = data_703660
        var_4c = 0
        
        if (esi_4 != 0xffffffff)
            uint32_t eax_27 = zx.d(data_70365c)
            char const* const var_18_3
            
            if (eax_27 == 0)
                int32_t var_10_7 = esi_4 s% 0x2710
                int32_t var_14_6 = esi_4 s/ 0x2710
                var_18_3 = "z%03d %04d"
            else if (eax_27 == 1)
                int32_t var_10_6 = esi_4 s% 0x186a0
                int32_t var_14_5 = esi_4 s/ 0x186a0
                var_18_3 = "z%03d %05d"
            else
                int32_t var_10_5 = esi_4 s% 0x186a0
                int32_t var_14_4 = esi_4 s/ 0x186a0
                var_18_3 = "z%04d %05d"
            
            sub_4c84d0(&var_4c, var_18_3)
        
        bool cond:2_1 = data_1af0b10 == 0
        char var_8cc = 0
        
        if (not(cond:2_1))
            char* var_10_8 = &data_1af0b10
            sub_4c84d0(&var_8cc, &data_619364)
        
        char* var_10_9 = edi_2
        char* var_14_8 = &var_8cc
        char* var_18_5 = &var_4c
        char* var_1c_3 = &data_92b1b0
        char* var_20_2 = &data_703814
        char* var_24_2 = &data_7037ec
        int32_t var_28_2 = data_91e8fc
        int32_t var_2c_2 = data_719ba4
        int32_t var_30_2 = data_72d6ac
        int32_t var_34_2 = data_719b6c
        int32_t var_38_2 = ((eax_4 + (edx_3 & 0x3ff)) s>> 0xa) + 1
        int32_t eax_36
        int32_t edx_15
        edx_15:eax_36 = sx.q(((eax_4 + (edx_3 & 0x3ff)) s>> 0xa) + 1)
        int32_t var_3c_1 = ((eax_36 + (edx_15 & 0x3ff)) s>> 0xa) + 1
        int32_t var_40_1 = (((edx_1 & 0x3ff) + eax_2) s>> 0xa) + 1
        int32_t eax_41
        int32_t edx_17
        edx_17:eax_41 = sx.q((((edx_1 & 0x3ff) + eax_2) s>> 0xa) + 1)
        int32_t var_44_1 = ((eax_41 + (edx_17 & 0x3ff)) s>> 0xa) + 1
        uint32_t var_48_1 = zx.d(data_187c61e)
        var_4c.d = zx.d(data_187c61c)
        uint32_t var_50_2 = zx.d(data_187c61a)
        uint32_t var_54_2 = zx.d(data_187c616)
        uint32_t wMinute = zx.d(systemTime.wMinute)
        uint32_t wHour = zx.d(systemTime.wHour)
        uint32_t wDay = zx.d(systemTime.wDay)
        uint32_t wMonth = zx.d(systemTime.wMonth)
        int32_t var_68_1 = 0x703520
        void* var_6c_1 = &data_108f5cc
        sub_4c84d0(&var_1a4cc, &data_619370)
    else
        char* var_10_4 = edi_2
        int32_t var_14_3 = data_1357028
        int32_t var_18_2 = data_135702c
        int32_t var_1c_1 = ((eax_4 + (edx_3 & 0x3ff)) s>> 0xa) + 1
        int32_t eax_10
        int32_t edx_5
        edx_5:eax_10 = sx.q(((eax_4 + (edx_3 & 0x3ff)) s>> 0xa) + 1)
        int32_t var_20_1 = ((eax_10 + (edx_5 & 0x3ff)) s>> 0xa) + 1
        int32_t var_24_1 = (((edx_1 & 0x3ff) + eax_2) s>> 0xa) + 1
        int32_t eax_15
        int32_t edx_7
        edx_7:eax_15 = sx.q((((edx_1 & 0x3ff) + eax_2) s>> 0xa) + 1)
        int32_t var_28_1 = ((eax_15 + (edx_7 & 0x3ff)) s>> 0xa) + 1
        uint32_t var_2c_1 = zx.d(data_187c61e)
        uint32_t var_30_1 = zx.d(data_187c61c)
        uint32_t var_34_1 = zx.d(data_187c61a)
        uint32_t var_38_1 = zx.d(data_187c616)
        uint32_t wMinute_1 = zx.d(systemTime.wMinute)
        uint32_t wHour_1 = zx.d(systemTime.wHour)
        uint32_t wDay_1 = zx.d(systemTime.wDay)
        uint32_t wMonth_1 = zx.d(systemTime.wMonth)
        var_4c.d = 0x703520
        void* var_50_1 = &data_108f5cc
        sub_4c84d0(&var_1a4cc, &data_619248)
    result = sub_4d4860(&var_1a4cc)
    data_1af1784 = 1

sub_5f02dd(arg1 ^ &__saved_ebp)
return result
