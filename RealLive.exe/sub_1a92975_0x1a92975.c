// 函数: sub_1a92975
// 地址: 0x1a92975
// 来自: F:\SETUPDATA\GAMEDATA\RealLive.exe

sub_1a92a1a()

if (data_1c076e0 == 1)
    TerminateProcess(GetCurrentProcess(), arg1)
    noreturn

data_1c076dc = 1
data_1c076d8 = arg3.b

if (arg2 == 0)
    int32_t eax_2 = data_1c09310
    
    if (eax_2 != 0)
        int32_t* i = data_1c0930c - 4
        
        if (i u>= eax_2)
            do
                int32_t eax_3 = *i
                
                if (eax_3 != 0)
                    eax_3()
                
                i -= 4
            while (i u>= data_1c09310)
    
    sub_1a92a2c(0x1adca04, 0x1adcc0c)

sub_1a92a2c(0x1adcd10, 0x1adcf18)

if (arg3 != 0)
    return sub_1a92a23()

data_1c076e0 = 1
ExitProcess(arg1)
noreturn
