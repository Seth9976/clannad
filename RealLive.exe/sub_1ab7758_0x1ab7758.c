// 函数: sub_1ab7758
// 地址: 0x1ab7758
// 来自: F:\SETUPDATA\GAMEDATA\RealLive.exe

int32_t result = 0xffffffff
int32_t* eax = sub_1ab0818()
int32_t* edi = *(sub_1ac597f() + 4)
sub_1ac6465(arg1, arg2, arg3, arg4)
int32_t eax_3

if (edi != 0)
    eax_3 = (*(*edi + 0x84))()

if (edi == 0 || eax_3 != 0)
    int32_t result_1
    
    if ((*(*eax + 0x50))() != 0)
        result_1 = (*(*eax + 0x54))()
    else
        int32_t* ecx_3 = eax[7]
        
        if (ecx_3 != 0)
            (*(*ecx_3 + 0x58))()
        
        result_1 = (*(*eax + 0x68))()
    
    result = result_1

sub_1ac80ce()
return result
