#include <iostream>

/**
 * Singleton is a creational design pattern, which ensures that 
 * only one object of its kind exists and provides a single point of 
 * access to it for any other code.
 * /

/**
 * The Singleton class defines the `GetInstance` method that serves as an
 * alternative to constructor and lets clients access the same instance of this
 * class over and over.
 */
class Singleton {
protected:
    /**
     * The Singleton's constructor should always be private to prevent direct
     * construction calls with the `new` operator.
     */
    Singleton(const std::string value) : value_(value) {}
    static Singleton* singleton_;

    std::string value_;
public:
    /**
     * Singletons should not be cloneable.
     */
    Singleton(Singleton &other) = delete;
    /**
     * Singletons should not be assignable.
     */
    void operator=(const Singleton &) = delete;
    /**
     * This is the static method that controls the access to the singleton
     * instance. On the first run, it creates a singleton object and places it
     * into the static field. On subsequent runs, it returns the client existing
     * object stored in the static field.
     */

    static Singleton *GetInstance(const std::string& value);
    /**
     * Finally, any singleton should define some logic, which can be
     * executed on its instance.
     */
    void SomeLogic()
    {
        // ...
    }

    std::string value() const{
        return value_;
    } 
};