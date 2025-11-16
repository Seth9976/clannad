// 函数: sub_664d00
// 地址: 0x664d00
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9c5865
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_9c8 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
void** lpszServerName_1 = arg3
uint32_t var_9a8 = arg6
int32_t* eax_4 = arg8
int32_t* var_9a0 = eax_4
int32_t var_8_1 = 3

if (data_bac4fc == 0)
    int32_t* lpszAgent = &data_b892f4
    
    if (data_b89308 u>= 8)
        lpszAgent = data_b892f4
    
    eax_4 = InternetOpenW(lpszAgent, 0, nullptr, nullptr, 0)
    data_bac4fc = eax_4

void** i_3
void** arg_10
PWSTR lpszObjectName_1
int32_t* lpszHeaders_1
int32_t ebx
int16_t var_860
int32_t var_84c
int32_t var_830
int32_t var_81c

if (data_bac4fc != 0 || eax_4 != 0)
    int16_t* eax_7 = sub_548cb0(eax_4, u"https://", &var_830, arg3)
    var_8_1.b = 6
    void var_980
    sub_5327a0(eax_7, eax_7, &var_980, &lpszObjectName_1)
    
    if (var_81c u>= 8)
        j__free(var_830)
    
    void* i_2 = nullptr
    void** var_8b0_1 = nullptr
    int32_t var_8ac_1 = 0
    var_8_1.b = 9
    int32_t* var_9cc_8 = var_9a0
    sub_66ab10(&i_2, nullptr, i_3, arg4)
    int32_t* var_9cc_9 = var_9a0
    sub_66ab10(&i_2, var_8b0_1, arg_10, arg5)
    void* i_4 = i_2
    int32_t eax_11 = (var_8b0_1 - i_4) s/ 0x30
    sub_66ace0(eax_11, var_8b0_1, i_4, eax_11, 0.d)
    int16_t* eax_12 = sub_6b2b60(&var_830)
    var_8_1.b = 0xa
    data_bac510
    int16_t var_890
    int16_t* eax_13 = sub_6b2b60(&var_890)
    var_8_1.b = 0xb
    int16_t* eax_14 = sub_532b80(eax_13, eax_13, &var_860, 0xaf8b9c)
    var_8_1.b = 0xc
    void var_998
    sub_5327a0(eax_14, eax_14, &var_998, eax_12)
    
    if (var_84c u>= 8)
        j__free(var_860.d)
    
    int32_t var_84c_2 = 7
    int32_t var_850_1 = 0
    var_860 = 0
    int32_t var_87c
    
    if (var_87c u>= 8)
        j__free(var_890.d)
    
    int32_t var_87c_1 = 7
    int32_t var_880_1 = 0
    var_890 = 0
    
    if (var_81c u>= 8)
        j__free(var_830)
    
    int16_t* eax_15 = nullptr
    int32_t var_90c_1 = 7
    int32_t ecx_14 = 0
    int16_t* var_910_1 = nullptr
    int16_t var_920 = 0
    var_8_1.b = 0x11
    int16_t var_8a8
    int32_t var_894
    
    if (i_4 != var_8b0_1)
        while (true)
            int32_t var_9cc_15 = 0
            
            if (sub_536340(&var_920, ecx_14, eax_15, &data_ad7c90) != 0)
                sub_532910(&var_920, 0xaf8b9c, 1)
            
            int16_t* eax_17 = sub_6b2b60(&var_830)
            var_8_1.b = 0x12
            int16_t* eax_18 = sub_6b2b60(&var_8a8)
            var_8_1.b = 0x13
            int16_t* eax_19 = sub_532b80(eax_18, eax_18, &var_860, &data_af8ba0)
            var_8_1.b = 0x14
            var_8_1.b = 0x15
            ecx_14 =
                sub_532870(&var_920, sub_5327a0(eax_19, eax_19, &var_890, eax_17), 0, 0xffffffff)
            
            if (var_87c_1 u>= 8)
                ecx_14 = j__free(var_890.d)
            
            var_87c_1 = 7
            int32_t var_880_2 = 0
            var_890 = 0
            
            if (var_84c_2 u>= 8)
                ecx_14 = j__free(var_860.d)
            
            var_84c_2 = 7
            int32_t var_850_2 = 0
            var_860 = 0
            
            if (var_894 u>= 8)
                ecx_14 = j__free(var_8a8.d)
            
            var_8_1.b = 0x11
            var_894 = 7
            int32_t var_898_1 = 0
            var_8a8 = 0
            
            if (var_81c u>= 8)
                ecx_14 = j__free(var_830)
            
            i_4 += 0x30
            
            if (i_4 == var_8b0_1)
                break
            
            eax_15 = var_910_1
    
    int16_t* eax_21 = sub_6b2b60(&var_830)
    var_8_1.b = 0x16
    int16_t var_878
    int16_t* eax_22 = sub_6b2b60(&var_878)
    var_8_1.b = 0x17
    int16_t var_8d8
    int16_t* eax_23 = sub_6b2b60(&var_8d8)
    var_8_1.b = 0x18
    int16_t* eax_24 = sub_532b80(eax_23, eax_23, &var_860, 0xaf8b9c)
    var_8_1.b = 0x19
    int16_t* eax_25 = sub_5327a0(eax_24, eax_24, &var_890, eax_22)
    var_8_1.b = 0x1a
    int16_t* eax_26 = sub_532b80(eax_25, eax_25, &var_8a8, 0xaf8b9c)
    var_8_1.b = 0x1b
    void var_968
    sub_5327a0(eax_26, eax_26, &var_968, eax_21)
    
    if (var_894 u>= 8)
        j__free(var_8a8.d)
    
    int32_t var_894_1 = 7
    int32_t var_898_2 = 0
    var_8a8 = 0
    
    if (var_87c_1 u>= 8)
        j__free(var_890.d)
    
    int32_t var_87c_2 = 7
    int32_t var_880_3 = 0
    var_890 = 0
    
    if (var_84c_2 u>= 8)
        j__free(var_860.d)
    
    int32_t var_84c_3 = 7
    int32_t var_850_3 = 0
    var_860 = 0
    int32_t var_8c4
    
    if (var_8c4 u>= 8)
        j__free(var_8d8.d)
    
    int32_t var_8c4_1 = 7
    int32_t var_8c8_1 = 0
    var_8d8 = 0
    int32_t var_864
    
    if (var_864 u>= 8)
        j__free(var_878.d)
    
    int32_t var_864_1 = 7
    int32_t var_868_1 = 0
    var_878 = 0
    var_8_1.b = 0x22
    
    if (var_81c u>= 8)
        j__free(var_830)
    
    int32_t var_81c_1 = 7
    var_830.w = 0
    int32_t var_820_1 = 0
    void var_950
    sub_6b2e00(&var_968, &var_998, &var_950, &var_968)
    var_8_1.b = 0x23
    int32_t var_834_1 = 7
    int32_t var_838_1 = 0
    int16_t var_848 = 0
    sub_52e720(&var_848, u"oauth_signature", 0xf)
    var_8_1.b = 0x24
    var_830.w = 0
    int32_t var_81c_2 = 7
    int32_t var_820_2 = 0
    sub_52e3c0(&var_830, &var_950, 0, 0xffffffff)
    var_8_1.b = 0x25
    sub_669320(&i_2, &var_848)
    var_8_1.b = 0x23
    
    if (var_81c_2 u>= 8)
        j__free(var_830)
    
    int32_t var_81c_3 = 7
    int32_t var_820_3 = 0
    var_830.w = 0
    
    if (var_834_1 u>= 8)
        j__free(var_848.d)
    
    int32_t var_8dc_1 = 7
    int32_t var_8e0_1 = 0
    int16_t var_8f0 = 0
    sub_52e720(&var_8f0, &data_ad7c90, nullptr)
    var_8_1.b = 0x26
    
    for (void* i = i_2; i != var_8b0_1; i += 0x30)
        int32_t eax_28
        eax_28.b = var_8e0_1 != 0
        eax_28.b = eax_28 == 0
        eax_28.b = eax_28.b == 0
        
        if (eax_28.b != 0)
            sub_532910(&var_8f0, &data_aee74c, 1)
        
        int16_t* eax_29 = sub_6b2b60(&var_890)
        var_8_1.b = 0x27
        int16_t* eax_30 = sub_6b2b60(&var_8a8)
        var_8_1.b = 0x28
        int16_t* eax_31 = sub_532b80(eax_30, eax_30, &var_8d8, 0xaf8cb8)
        var_8_1.b = 0x29
        int16_t* eax_32 = sub_5327a0(eax_31, eax_31, &var_878, eax_29)
        var_8_1.b = 0x2a
        var_8_1.b = 0x2b
        sub_532870(&var_8f0, sub_532b80(eax_32, eax_32, &var_830, &data_af8cb4), 0, 0xffffffff)
        
        if (var_81c_3 u>= 8)
            j__free(var_830)
        
        var_81c_3 = 7
        int32_t var_820_4 = 0
        var_830.w = 0
        
        if (var_864_1 u>= 8)
            j__free(var_878.d)
        
        var_864_1 = 7
        int32_t var_868_2 = 0
        var_878 = 0
        
        if (var_8c4_1 u>= 8)
            j__free(var_8d8.d)
        
        var_8c4_1 = 7
        int32_t var_8c8_2 = 0
        var_8d8 = 0
        
        if (var_894_1 u>= 8)
            j__free(var_8a8.d)
        
        var_8_1.b = 0x26
        var_894_1 = 7
        int32_t var_898_3 = 0
        var_8a8 = 0
        
        if (var_87c_2 u>= 8)
            j__free(var_890.d)
    
    int16_t* eax_35 = sub_548cb0(&var_8f0, u"OAuth ", &var_830, &var_8f0)
    var_8_1.b = 0x2c
    
    if (&var_8f0 != eax_35)
        sub_52e3c0(&var_8f0, eax_35, 0, 0xffffffff)
    
    var_8_1.b = 0x26
    
    if (var_81c_3 u>= 8)
        j__free(var_830)
    
    void var_908
    int32_t ecx_44 = sub_52e820(&var_908, &data_ad7c90)
    var_8_1.b = 0x2d
    int16_t* var_8f8
    
    for (void** i_1 = i_3; i_1 != arg4; i_1 = &i_1[0xc])
        int32_t var_9cc_41 = 0
        
        if (sub_536340(&var_908, ecx_44, var_8f8, &data_ad7c90) != 0)
            sub_532910(&var_908, 0xaf8b9c, 1)
        
        int16_t* eax_37 = sub_6b2b60(&var_8a8)
        var_8_1.b = 0x2e
        int16_t* eax_38 = sub_6b2b60(&var_8d8)
        var_8_1.b = 0x2f
        int16_t* eax_39 = sub_532b80(eax_38, eax_38, &var_878, &data_af8ba0)
        var_8_1.b = 0x30
        var_8_1.b = 0x31
        ecx_44 = sub_532870(&var_908, sub_5327a0(eax_39, eax_39, &var_830, eax_37), 0, 0xffffffff)
        
        if (var_81c_3 u>= 8)
            ecx_44 = j__free(var_830)
        
        var_81c_3 = 7
        int32_t var_820_5 = 0
        var_830.w = 0
        
        if (var_864_1 u>= 8)
            ecx_44 = j__free(var_878.d)
        
        var_864_1 = 7
        int32_t var_868_3 = 0
        var_878 = 0
        
        if (var_8c4_1 u>= 8)
            ecx_44 = j__free(var_8d8.d)
        
        var_8_1.b = 0x2d
        var_8c4_1 = 7
        int32_t var_8c8_3 = 0
        var_8d8 = 0
        
        if (var_894_1 u>= 8)
            ecx_44 = j__free(var_8a8.d)
    
    int32_t var_9cc_47 = 0
    
    if (sub_536340(&var_908, ecx_44, var_8f8, &data_ad7c90) != 0)
        var_8_1.b = 0x32
        sub_532870(&lpszObjectName_1, sub_548cb0(&var_908, 0xaf17c4, &var_830, &var_908), 0, 
            0xffffffff)
        var_8_1.b = 0x2d
        
        if (var_81c_3 u>= 8)
            j__free(var_830)
    
    if (arg10 != 0)
        sub_532910(&lpszHeaders_1, &data_af8cd0, 2)
    
    var_8_1.b = 0x33
    sub_532870(&lpszHeaders_1, sub_548cb0(&var_8f0, Authorization: ", &var_830, &var_8f0), 0, 
        0xffffffff)
    var_8_1.b = 0x2d
    
    if (var_81c_3 u>= 8)
        j__free(var_830)
    
    int32_t* lpOptional_1
    sub_6af1c0(&lpOptional_1)
    var_8_1.b = 0x34
    void** lpszServerName = lpszServerName_1
    
    if (lpszServerName[5] u>= 8)
        lpszServerName = *lpszServerName
    
    int32_t eax_46 = InternetConnectW(data_bac4fc, lpszServerName, 0x1bb, nullptr, nullptr, 3, 0, 0)
    
    if (eax_46 != 0)
        PWSTR lpszObjectName = &lpszObjectName_1
        PWSTR lpszVerb = arg2
        
        if (arg9 u>= 8)
            lpszObjectName = lpszObjectName_1
        
        if (*(lpszVerb + 0x14) u>= 8)
            lpszVerb = *lpszVerb
        
        int32_t eax_49 = HttpOpenRequestW(eax_46, lpszVerb, lpszObjectName, nullptr, nullptr, 
            nullptr, 0x80800000, 0)
        
        if (eax_49 != 0)
            uint32_t dwOptionalLength
            int32_t* lpOptional
            
            if (dwOptionalLength != 0)
                lpOptional = &lpOptional_1
                int32_t var_924
                
                if (var_924 u>= 0x10)
                    lpOptional = lpOptional_1
            else
                lpOptional = nullptr
            
            int32_t* lpszHeaders = &lpszHeaders_1
            
            if (arg11 u>= 8)
                lpszHeaders = lpszHeaders_1
            
            if (HttpSendRequestW(eax_49, lpszHeaders, arg10, lpOptional, dwOptionalLength) != 0)
                uint32_t lpdwBufferLength = 0x400
                int16_t buffer = 0
                char var_816[0x7fe]
                _memset(&var_816, 0, 0x7fe)
                HttpQueryInfoW(eax_49, 5, &buffer, &lpdwBufferLength, nullptr)
                sub_52e820(&var_860, &buffer)
                int16_t* ecx_70 = &var_860
                
                if (var_84c_3 u>= 8)
                    ecx_70 = var_860.d
                
                void* eax_56 = &ecx_70[var_850_3]
                void** lpszServerName_2 = &var_860
                
                if (var_84c_3 u>= 8)
                    lpszServerName_2 = var_860.d
                
                lpszServerName_1 = lpszServerName_2
                uint32_t ecx_72 = 0
                
                if (sub_6af490(eax_56, &var_9a8, &lpszServerName_1, eax_56) != 0)
                    ecx_72 = var_9a8
                
                uint32_t var_9a4 = ecx_72
                
                if (var_84c_3 u>= 8)
                    j__free(var_860.d)
                    ecx_72 = var_9a4
                
                sub_5979b0(var_9a0, ecx_72)
                
                if (InternetReadFile(eax_49, sub_5b2660(var_9a0), var_9a4, &var_9a4) != 0)
                    InternetCloseHandle(eax_49)
                    InternetCloseHandle(eax_46)
                    ebx.b = 1
                else
                    <lambda_10dfc4c799aff24d2608c390bae55ac6>::<lambda_10dfc4c799aff24d2608c390bae55ac6>(
                        &var_830, InternetReadFile")
                    var_8_1.b = 0x3b
                    sub_6b9eb0(&var_830)
                    var_8_1.b = 0x34
                    sub_52e8a0(&var_830)
                    int16_t* eax_60 = sub_6b9ed0(&var_878)
                    var_8_1.b = 0x3c
                    sub_6b2ab0(sub_548cb0(eax_60, 0xaf8e0c, &var_830, eax_60), 0)
                    sub_52e8a0(&var_830)
                    sub_52e8a0(&var_878)
                label_665dc3:
                    InternetCloseHandle(eax_49)
                    InternetCloseHandle(eax_46)
                    ebx.b = 0
            else
                sub_52e820(&var_830, u"HttpSendRequest")
                var_8_1.b = 0x39
                enum WIN32_ERROR eax_53 = GetLastError()
                sub_6b9c90(eax_53, eax_53, 2, &var_830)
                var_8_1.b = 0x34
                
                if (var_81c_3 u>= 8)
                    j__free(var_830)
                
                int16_t* eax_54 = sub_6b9ed0(&var_878)
                var_8_1.b = 0x3a
                int16_t* lpText_3 = sub_548cb0(eax_54, 0xaf8d90, &var_830, eax_54)
                
                if (*(lpText_3 + 0x14) u>= 8)
                    lpText_3 = *lpText_3
                
                MessageBoxW(data_4ebe3ac, lpText_3, 0xaef64c, MB_ICONEXCLAMATION)
                
                if (var_81c_3 u>= 8)
                    j__free(var_830)
                
                int32_t var_81c_6 = 7
                int32_t var_820_8 = 0
                var_830.w = 0
                
                if (var_864_1 u< 8)
                    goto label_665dc3
                
                j__free(var_878.d)
                InternetCloseHandle(eax_49)
                InternetCloseHandle(eax_46)
                ebx.b = 0
        else
            sub_52e820(&var_830, u"HttpSendRequest")
            var_8_1.b = 0x37
            enum WIN32_ERROR eax_50 = GetLastError()
            sub_6b9c90(eax_50, eax_50, 2, &var_830)
            var_8_1.b = 0x34
            
            if (var_81c_3 u>= 8)
                j__free(var_830)
            
            int16_t* eax_51 = sub_6b9ed0(&var_878)
            var_8_1.b = 0x38
            int16_t* lpText_2 = sub_548cb0(eax_51, 0xaf8d60, &var_830, eax_51)
            
            if (*(lpText_2 + 0x14) u>= 8)
                lpText_2 = *lpText_2
            
            MessageBoxW(data_4ebe3ac, lpText_2, 0xaef64c, MB_ICONEXCLAMATION)
            
            if (var_81c_3 u>= 8)
                j__free(var_830)
            
            int32_t var_81c_5 = 7
            int32_t var_820_7 = 0
            var_830.w = 0
            
            if (var_864_1 u< 8)
                InternetCloseHandle(eax_46)
                ebx.b = 0
            else
                j__free(var_878.d)
                InternetCloseHandle(eax_46)
                ebx.b = 0
    else
        sub_52e820(&var_830, u"InternetConnect")
        var_8_1.b = 0x35
        enum WIN32_ERROR eax_47 = GetLastError()
        sub_6b9c90(eax_47, eax_47, eax_46 + 2, &var_830)
        var_8_1.b = 0x34
        
        if (var_81c_3 u>= 8)
            j__free(var_830)
        
        int16_t* eax_48 = sub_6b9ed0(&var_878)
        var_8_1.b = 0x36
        int16_t* lpText_1 = sub_548cb0(eax_48, 0xaf8d18, &var_830, eax_48)
        
        if (*(lpText_1 + 0x14) u>= 8)
            lpText_1 = *lpText_1
        
        MessageBoxW(data_4ebe3ac, lpText_1, 0xaef64c, MB_ICONEXCLAMATION)
        
        if (var_81c_3 u>= 8)
            j__free(var_830)
        
        int32_t var_81c_4 = 7
        int32_t var_820_6 = 0
        var_830.w = 0
        
        if (var_864_1 u< 8)
            ebx.b = 0
        else
            j__free(var_878.d)
            ebx.b = 0
    
    sub_53f510(&lpOptional_1)
    sub_52e8a0(&var_908)
    sub_52e8a0(&var_8f0)
    sub_52e8a0(&var_950)
    sub_52e8a0(&var_968)
    sub_52e8a0(&var_920)
    sub_52e8a0(&var_998)
    sub_665e80(&i_2)
    sub_52e8a0(&var_980)
else
    int32_t var_8ac = 7
    int32_t* var_8b0 = eax_4
    int16_t var_8c0 = eax_4.w
    sub_52e720(&var_8c0, u"InternetOpen", 0xc)
    var_8_1.b = 4
    enum WIN32_ERROR eax_5 = GetLastError()
    sub_6b9c90(eax_5, eax_5, 2, &var_8c0)
    var_8_1.b = 3
    
    if (var_8ac u>= 8)
        j__free(var_8c0.d)
    
    int16_t* eax_6 = sub_6b9ed0(&var_830)
    var_8_1.b = 5
    int16_t* lpText = sub_548cb0(eax_6, 0xaf8c54, &var_860, eax_6)
    
    if (*(lpText + 0x14) u>= 8)
        lpText = *lpText
    
    MessageBoxW(data_4ebe3ac, lpText, 0xaef64c, MB_ICONEXCLAMATION)
    
    if (var_84c u>= 8)
        j__free(var_860.d)
    
    int32_t var_84c_1 = 7
    int32_t var_850 = 0
    var_860 = 0
    
    if (var_81c u>= 8)
        j__free(var_830)
    
    ebx.b = 0
sub_52e8a0(&lpszObjectName_1)
sub_665e80(&i_3)
sub_665e80(&arg_10)
sub_52e8a0(&lpszHeaders_1)
int32_t result
result.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
