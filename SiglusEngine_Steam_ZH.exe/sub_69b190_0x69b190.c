// 函数: sub_69b190
// 地址: 0x69b190
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
int32_t* esi = arg4
int32_t* ebx = arg1
struct IRegistrarBase::ATL::CRegObject::VTable* var_a6c =
    &ATL::CRegObject::`vftable'{for `IRegistrarBase'}
int32_t* var_a3c = ebx
int32_t var_a68
__builtin_memset(&var_a68, 0, 0x25)
CRITICAL_SECTION criticalSection

if (InitializeCriticalSectionAndSpinCount(&criticalSection, 0) == 0)
    enum WIN32_ERROR edi_1 = GetLastError()
    bool cond:0_1 = edi_1 s>= NO_ERROR
    
    if (edi_1 s> NO_ERROR)
        edi_1 = zx.d(edi_1.w) | 0x80070000
        cond:0_1 = edi_1 s>= NO_ERROR
    
    if (not(cond:0_1))
        sub_699a00(&var_a6c)
        sub_745f2b(eax_1 ^ &__saved_ebp)
        return edi_1

char var_a44 = 1

if (esi != 0)
    int32_t* i = *esi
    
    if (i != 0)
        do
            int32_t* ebx_1 = esi[1]
            
            if (i != 0 && ebx_1 != 0)
                EnterCriticalSection(&criticalSection)
                sub_699670(&var_a68, i, ebx_1)
                LeaveCriticalSection(&criticalSection)
            
            i = esi[2]
            esi = &esi[2]
        while (i != 0)
        
        ebx = var_a3c

enum WIN32_ERROR esi_1 = (*(*ebx + 0x14))(&var_a6c)

if (esi_1 s>= NO_ERROR)
    HMODULE hModule = data_b95abc
    var_a3c = nullptr
    void filename
    uint32_t eax_7 = GetModuleFileNameW(hModule, &filename, 0x104)
    
    if (eax_7 != 0)
        if (eax_7 == 0x104)
            sub_5cbbd0(&var_a3c)
            sub_699a00(&var_a6c)
            sub_745f2b(eax_1 ^ &__saved_ebp)
            return 0x8007007a
        
        void var_a38
        sub_6991d0(&filename, 0x208, &var_a38, &filename)
        HMODULE eax_12
        
        if (hModule != 0)
            eax_12 = GetModuleHandleW(nullptr)
        
        int32_t* eax_13
        
        if (hModule == 0 || hModule == eax_12)
            int16_t var_628 = 0x22
            char var_626[0x416]
            
            if (sub_5c48e0(&var_a38, 0x20b, &var_626, &var_a38) == 0)
                sub_5cbbd0(&var_a3c)
                sub_699a00(&var_a6c)
                sub_745f2b(eax_1 ^ &__saved_ebp)
                return 0x80004005
            
            int32_t eax_17 = sub_5c48b0(&var_628)
            (&var_628)[eax_17] = 0x22
            
            if ((eax_17 << 1) + 2 u>= 0x418)
                ___report_rangecheckfailure()
                noreturn
            
            *(&var_628 + (eax_17 << 1) + 2) = 0
            eax_13 = &var_628
        else
            eax_13 = &var_a38
        
        esi_1 = sub_699ab0(&var_a6c, u"Module", eax_13)
        
        if (esi_1 s>= NO_ERROR)
            enum WIN32_ERROR eax_20
            int32_t ecx_20
            eax_20, ecx_20 = sub_699ab0(&var_a6c, u"Module_Raw", &var_a38)
            esi_1 = eax_20
            
            if (esi_1 s>= NO_ERROR)
                PWSTR edx = &filename
                int32_t var_a7c_9 = ecx_20
                struct IRegistrarBase::ATL::CRegObject::VTable** ecx_21 = &var_a6c
                enum WIN32_ERROR eax_8
                
                if (arg3 == 0)
                    eax_8 = std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >(
                        ecx_21, edx, arg2)
                else
                    eax_8 = Concurrency::concurrent_queue<class Concurrency::message<enum Concurrency::agent_status>*,class std::allocator<class Concurrency::message<enum Concurrency::agent_status>*> >::~concurrent_queue<class Concurrency::message<enum Concurrency::agent_status>*,class std::allocator<class Concurrency::message<enum Concurrency::agent_status>*> >(
                        ecx_21, edx, arg2)
                
                esi_1 = eax_8
    else
        esi_1 = sub_5c4a80()
    
    sub_5cbbd0(&var_a3c)

sub_699a00(&var_a6c)
sub_745f2b(eax_1 ^ &__saved_ebp)
return esi_1
