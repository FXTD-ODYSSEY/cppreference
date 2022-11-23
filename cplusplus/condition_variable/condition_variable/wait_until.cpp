// cplusplus link https://cplusplus.com/reference/condition_variable\condition_variable\wait_until
while (!pred())
    if (wait_until(lck, abs_time) == cv_status::timeout)
        return pred();
return true;
