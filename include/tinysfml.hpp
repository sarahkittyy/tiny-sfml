#pragma once

#include <SFML/Graphics.hpp>
#include <string>

#include "Context.hpp"

/**
 * @brief Called once, ever. Good for initializing the window, title, and other settings.
 * 
 */
void setup();

/**
 * @brief Called once per frame. Use this to draw the objects you need to.
 * 
 */
void draw();

namespace tiny
{
/////////////INTIALIZATION////////////

/**
 * @brief Create and initialize the window.
 * 
 * @param width The width of the window.
 * @param height The height of the window.
 */
void createWindow(unsigned width = 500, unsigned height = 500);

/**
 * @brief Sets the max framerate of the window.
 * 
 * @param max The maximum framerate.
 */
void framerate(unsigned max);

/**
 * @brief Set the title of the window.
 * 
 * @param title The new window title.
 */
void title(std::string title);

/**
 * @brief Clear the screen with the given color.
 * 
 * @param r Red component.
 * @param g Green component.
 * @param b Blue component.
 * 
 * @remarks Call once at the beginning of draw() to refresh drawing.
 */
void background(unsigned r, unsigned g, unsigned b);

/**
 * @brief Clear the screen with the given greyscale color.
 * 
 * @param v The greyscale color value.
 */
void background(unsigned v);

////////////////DRAWING////////////////

/**
 * @brief Set the fill color for drawn objects.
 * 
 * @param r Red
 * @param g Green
 * @param b Blue
 */
void fill(unsigned r, unsigned g, unsigned b);

/**
 * @brief Set the fill color for drawn objects.
 * 
 * @param v The greyscale color value.
 */
void fill(unsigned v);

/**
 * @brief Set the stroke color (outline) of drawn objects.
 * 
 * @param r Red
 * @param g Green
 * @param b Blue
 */
void stroke(unsigned r, unsigned g, unsigned b);

/**
 * @brief Set the stroke color (outline) of drawn objects.
 * 
 * @param v The greyscale color value.
 */
void stroke(unsigned v);

/**
 * @brief Set the width of the pen stroke of drawn objects..
 * 
 * @param width The stroke width.
 */
void strokeWidth(float width);

/**
 * @brief Draw a rectangle to the screen.
 * 
 * @param x The x position.
 * @param y The y position.
 * @param w The width.
 * @param h The height.
 */
void rect(float x, float y, float w, float h);

/////////////////TRANSFORMS/////////////

/**
 * @brief Clears all transforms, including saved onces.
 * 
 */
void clearTransform();

/**
 * @brief Reset the current transform to default.
 * 
 */
void resetTransform();

/**
 * @brief Translate the current transform.
 * 
 * @param x The x offset.
 * @param y The y offset.
 */
void translate(float x, float y);

/**
 * @brief Rotates the current transform.
 * 
 * @param deg The degrees to rotate it by.
 */
void rotate(float deg);

/**
 * @brief Pushes the current transform, resetting it to default.
 * Can be retreived with pop().
 */
void push();

/**
 * @brief Pops the last push()'d transform, appending it to the current transform.
 * 
 * @remarks Call resetTransform() beforehand to just grab a clean copy of the previously push()'d transform.
 */
void pop();

};